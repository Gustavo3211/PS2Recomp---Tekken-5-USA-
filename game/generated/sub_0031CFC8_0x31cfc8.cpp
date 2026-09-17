#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031CFC8
// Address: 0x31cfc8 - 0x31d080
void sub_0031CFC8_0x31cfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031CFC8_0x31cfc8");
#endif

    switch (ctx->pc) {
        case 0x31d008u: goto label_31d008;
        default: break;
    }

    ctx->pc = 0x31cfc8u;

    // 0x31cfc8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x31cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x31cfcc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x31cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x31cfd0: 0x246938a0  addiu       $t1, $v1, 0x38A0
    ctx->pc = 0x31cfd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 14496));
    // 0x31cfd4: 0x24423a80  addiu       $v0, $v0, 0x3A80
    ctx->pc = 0x31cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14976));
    // 0x31cfd8: 0x494023  subu        $t0, $v0, $t1
    ctx->pc = 0x31cfd8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x31cfdc: 0x840c2  srl         $t0, $t0, 3
    ctx->pc = 0x31cfdcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
    // 0x31cfe0: 0x11000024  beqz        $t0, . + 4 + (0x24 << 2)
    ctx->pc = 0x31CFE0u;
    {
        const bool branch_taken_0x31cfe0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CFE0u;
        // 0x31cfe4: 0x240a0500  addiu       $t2, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cfe0) {
            ctx->pc = 0x31D074u;
            goto label_31d074;
        }
    }
    ctx->pc = 0x31CFE8u;
    // 0x31cfe8: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x31cfe8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
    // 0x31cfec: 0x24180100  addiu       $t8, $zero, 0x100
    ctx->pc = 0x31cfecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31cff0: 0x3c0f3000  lui         $t7, 0x3000
    ctx->pc = 0x31cff0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)12288 << 16));
    // 0x31cff4: 0x3c0b7000  lui         $t3, 0x7000
    ctx->pc = 0x31cff4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)28672 << 16));
    // 0x31cff8: 0x3c0ef000  lui         $t6, 0xF000
    ctx->pc = 0x31cff8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)61440 << 16));
    // 0x31cffc: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x31cffcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x31d000: 0x3c0d4a00  lui         $t5, 0x4A00
    ctx->pc = 0x31d000u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)18944 << 16));
    // 0x31d004: 0x0  nop
    ctx->pc = 0x31d004u;
    // NOP
label_31d008:
    // 0x31d008: 0x2d020101  sltiu       $v0, $t0, 0x101
    ctx->pc = 0x31d008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x31d00c: 0x300302d  daddu       $a2, $t8, $zero
    ctx->pc = 0x31d00cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d010: 0x102300b  movn        $a2, $t0, $v0
    ctx->pc = 0x31d010u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
    // 0x31d014: 0x12b2024  and         $a0, $t1, $t3
    ctx->pc = 0x31d014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 11));
    // 0x31d018: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x31d018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x31d01c: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x31d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31d020: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x31d020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x31d024: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x31d024u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x31d028: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x31d028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x31d02c: 0x6f1825  or          $v1, $v1, $t7
    ctx->pc = 0x31d02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
    // 0x31d030: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x31d030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x31d034: 0x148b0004  bne         $a0, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D034u;
    {
        const bool branch_taken_0x31d034 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 11));
        ctx->pc = 0x31D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D034u;
        // 0x31d038: 0x2383c  dsll32      $a3, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d034) {
            ctx->pc = 0x31D048u;
            goto label_31d048;
        }
    }
    ctx->pc = 0x31D03Cu;
    // 0x31d03c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31D03Cu;
    {
        const bool branch_taken_0x31d03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D03Cu;
        // 0x31d040: 0x12e1025  or          $v0, $t1, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d03c) {
            ctx->pc = 0x31D04Cu;
            goto label_31d04c;
        }
    }
    ctx->pc = 0x31D044u;
    // 0x31d044: 0x0  nop
    ctx->pc = 0x31d044u;
    // NOP
label_31d048:
    // 0x31d048: 0x12c1024  and         $v0, $t1, $t4
    ctx->pc = 0x31d048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 12));
label_31d04c:
    // 0x31d04c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31d04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d050: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31d050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31d054: 0x70e31b89  pcpyld      $v1, $a3, $v1
    ctx->pc = 0x31d054u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x31d058: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x31d058u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x31d05c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x31d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x31d060: 0x1064023  subu        $t0, $t0, $a2
    ctx->pc = 0x31d060u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x31d064: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x31d064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x31d068: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x31d068u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x31d06c: 0x1500ffe6  bnez        $t0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x31D06Cu;
    {
        const bool branch_taken_0x31d06c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D06Cu;
        // 0x31d070: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d06c) {
            ctx->pc = 0x31D008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d008;
        }
    }
    ctx->pc = 0x31D074u;
label_31d074:
    // 0x31d074: 0x3e00008  jr          $ra
    ctx->pc = 0x31D074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D074u;
        // 0x31d078: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D07Cu;
    // 0x31d07c: 0x0  nop
    ctx->pc = 0x31d07cu;
    // NOP
    ctx->pc = 0x31d080u;
}
