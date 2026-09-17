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

// Function: sub_003425C0
// Address: 0x3425c0 - 0x3426b0
void sub_003425C0_0x3425c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003425C0_0x3425c0");
#endif

    switch (ctx->pc) {
        case 0x342608u: goto label_342608;
        case 0x342648u: goto label_342648;
        case 0x3426a4u: goto label_3426a4;
        default: break;
    }

    ctx->pc = 0x3425c0u;

    // 0x3425c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3425c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3425c4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3425c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3425c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3425c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3425cc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x3425ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x3425d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3425d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3425d4: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x3425d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3425d8: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x3425d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3425dc: 0x24e80004  addiu       $t0, $a3, 0x4
    ctx->pc = 0x3425dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3425e0: 0xe21824  and         $v1, $a3, $v0
    ctx->pc = 0x3425e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x3425e4: 0xa72023  subu        $a0, $a1, $a3
    ctx->pc = 0x3425e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3425e8: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x3425e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x3425ec: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x3425ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x3425f0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3425f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3425f4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3425F4u;
    {
        const bool branch_taken_0x3425f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3425F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425F4u;
        // 0x3425f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3425f4) {
            ctx->pc = 0x342630u;
            goto label_342630;
        }
    }
    ctx->pc = 0x3425FCu;
    // 0x3425fc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3425fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342600: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x342600u;
    {
        const bool branch_taken_0x342600 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x342604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342600u;
        // 0x342604: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342600) {
            ctx->pc = 0x342668u;
            goto label_342668;
        }
    }
    ctx->pc = 0x342608u;
label_342608:
    // 0x342608: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x342608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34260c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34260cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x342610: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x342610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x342614: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x342614u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x342618: 0x0  nop
    ctx->pc = 0x342618u;
    // NOP
    // 0x34261c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34261Cu;
    {
        const bool branch_taken_0x34261c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x342620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34261Cu;
        // 0x342620: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34261c) {
            ctx->pc = 0x342608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342608;
        }
    }
    ctx->pc = 0x342624u;
    // 0x342624: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x342624u;
    {
        const bool branch_taken_0x342624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342624u;
        // 0x342628: 0x8d250004  lw          $a1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342624) {
            ctx->pc = 0x342668u;
            goto label_342668;
        }
    }
    ctx->pc = 0x34262Cu;
    // 0x34262c: 0x0  nop
    ctx->pc = 0x34262cu;
    // NOP
label_342630:
    // 0x342630: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x342630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x342634: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x342634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x342638: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x342638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34263c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x34263Cu;
    {
        const bool branch_taken_0x34263c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x342640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34263Cu;
        // 0x342640: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34263c) {
            ctx->pc = 0x342668u;
            goto label_342668;
        }
    }
    ctx->pc = 0x342644u;
    // 0x342644: 0x0  nop
    ctx->pc = 0x342644u;
    // NOP
label_342648:
    // 0x342648: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x342648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34264c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x34264cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x342650: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x342650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x342654: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x342654u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x342658: 0x0  nop
    ctx->pc = 0x342658u;
    // NOP
    // 0x34265c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34265Cu;
    {
        const bool branch_taken_0x34265c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x342660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34265Cu;
        // 0x342660: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34265c) {
            ctx->pc = 0x342648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342648;
        }
    }
    ctx->pc = 0x342664u;
    // 0x342664: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x342664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_342668:
    // 0x342668: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x342668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x34266c: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x34266cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x342670: 0xad250004  sw          $a1, 0x4($t1)
    ctx->pc = 0x342670u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 5));
    // 0x342674: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x342674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x342678: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x342678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x34267c: 0x34420102  ori         $v0, $v0, 0x102
    ctx->pc = 0x34267cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)258);
    // 0x342680: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x342680u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x342684: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x342684u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x342688: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x342688u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x34268c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x34268cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342690: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x342690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x342694: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x342694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x342698: 0x344280cc  ori         $v0, $v0, 0x80CC
    ctx->pc = 0x342698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32972);
    // 0x34269c: 0xc0d079e  jal         func_341E78
    ctx->pc = 0x34269Cu;
    SET_GPR_U32(ctx, 31, 0x3426A4u);
    ctx->pc = 0x3426A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34269Cu;
    // 0x3426a0: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E78u, 0x34269Cu, 0x3426A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3426A4u;
label_3426a4:
    // 0x3426a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3426a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3426a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3426A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3426ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3426A8u;
        // 0x3426ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3426A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3426B0u;
}
