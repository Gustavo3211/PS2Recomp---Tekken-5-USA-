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

// Function: sub_0048A010
// Address: 0x48a010 - 0x48a108
void sub_0048A010_0x48a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048A010_0x48a010");
#endif

    switch (ctx->pc) {
        case 0x48a020u: goto label_48a020;
        case 0x48a030u: goto label_48a030;
        default: break;
    }

    ctx->pc = 0x48a010u;

    // 0x48a010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48a014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48a014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48a018: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x48A018u;
    SET_GPR_U32(ctx, 31, 0x48A020u);
    ctx->pc = 0x48A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A018u;
    // 0x48a01c: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x48A018u, 0x48A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A020u;
label_48a020:
    // 0x48a020: 0x30470081  andi        $a3, $v0, 0x81
    ctx->pc = 0x48a020u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)129);
    // 0x48a024: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48a024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a028: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x48a028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x48a02c: 0xc71007  srav        $v0, $a3, $a2
    ctx->pc = 0x48a02cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
label_48a030:
    // 0x48a030: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x48a030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48a034: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x48a034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x48a038: 0x2cc30008  sltiu       $v1, $a2, 0x8
    ctx->pc = 0x48a038u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x48a03c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x48A03Cu;
    {
        const bool branch_taken_0x48a03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A03Cu;
        // 0x48a040: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a03c) {
            ctx->pc = 0x48A0D0u;
            goto label_48a0d0;
        }
    }
    ctx->pc = 0x48A044u;
    // 0x48a044: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x48a044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x48a048: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48a048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48a04c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48a050: 0x8c639b90  lw          $v1, -0x6470($v1)
    ctx->pc = 0x48a050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941584)));
    // 0x48a054: 0x600008  jr          $v1
    ctx->pc = 0x48A054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48A060u: goto label_48a060;
            case 0x48A068u: goto label_48a068;
            case 0x48A078u: goto label_48a078;
            case 0x48A088u: goto label_48a088;
            case 0x48A098u: goto label_48a098;
            case 0x48A0A8u: goto label_48a0a8;
            case 0x48A0B8u: goto label_48a0b8;
            case 0x48A0C8u: goto label_48a0c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A054u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48A05Cu;
    // 0x48a05c: 0x0  nop
    ctx->pc = 0x48a05cu;
    // NOP
label_48a060:
    // 0x48a060: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x48A060u;
    {
        const bool branch_taken_0x48a060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A060u;
        // 0x48a064: 0xa4a4d600  sh          $a0, -0x2A00($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4294956544), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a060) {
            ctx->pc = 0x48A0D0u;
            goto label_48a0d0;
        }
    }
    ctx->pc = 0x48A068u;
label_48a068:
    // 0x48a068: 0x24a2d600  addiu       $v0, $a1, -0x2A00
    ctx->pc = 0x48a068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956544));
    // 0x48a06c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x48A06Cu;
    {
        const bool branch_taken_0x48a06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A06Cu;
        // 0x48a070: 0xa4440002  sh          $a0, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a06c) {
            ctx->pc = 0x48A0D0u;
            goto label_48a0d0;
        }
    }
    ctx->pc = 0x48A074u;
    // 0x48a074: 0x0  nop
    ctx->pc = 0x48a074u;
    // NOP
label_48a078:
    // 0x48a078: 0x24a2d600  addiu       $v0, $a1, -0x2A00
    ctx->pc = 0x48a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956544));
    // 0x48a07c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x48A07Cu;
    {
        const bool branch_taken_0x48a07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A07Cu;
        // 0x48a080: 0xa4440004  sh          $a0, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a07c) {
            ctx->pc = 0x48A0D0u;
            goto label_48a0d0;
        }
    }
    ctx->pc = 0x48A084u;
    // 0x48a084: 0x0  nop
    ctx->pc = 0x48a084u;
    // NOP
label_48a088:
    // 0x48a088: 0x24a2d600  addiu       $v0, $a1, -0x2A00
    ctx->pc = 0x48a088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956544));
    // 0x48a08c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x48A08Cu;
    {
        const bool branch_taken_0x48a08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A08Cu;
        // 0x48a090: 0xa4440006  sh          $a0, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a08c) {
            ctx->pc = 0x48A0D0u;
            goto label_48a0d0;
        }
    }
    ctx->pc = 0x48A094u;
    // 0x48a094: 0x0  nop
    ctx->pc = 0x48a094u;
    // NOP
label_48a098:
    // 0x48a098: 0x24a2d600  addiu       $v0, $a1, -0x2A00
    ctx->pc = 0x48a098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956544));
    // 0x48a09c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x48A09Cu;
    {
        const bool branch_taken_0x48a09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A09Cu;
        // 0x48a0a0: 0xa4440008  sh          $a0, 0x8($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a09c) {
            ctx->pc = 0x48A0D0u;
            goto label_48a0d0;
        }
    }
    ctx->pc = 0x48A0A4u;
    // 0x48a0a4: 0x0  nop
    ctx->pc = 0x48a0a4u;
    // NOP
label_48a0a8:
    // 0x48a0a8: 0x24a2d600  addiu       $v0, $a1, -0x2A00
    ctx->pc = 0x48a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956544));
    // 0x48a0ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48A0ACu;
    {
        const bool branch_taken_0x48a0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A0ACu;
        // 0x48a0b0: 0xa444000a  sh          $a0, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a0ac) {
            ctx->pc = 0x48A0D0u;
            goto label_48a0d0;
        }
    }
    ctx->pc = 0x48A0B4u;
    // 0x48a0b4: 0x0  nop
    ctx->pc = 0x48a0b4u;
    // NOP
label_48a0b8:
    // 0x48a0b8: 0x24a2d600  addiu       $v0, $a1, -0x2A00
    ctx->pc = 0x48a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956544));
    // 0x48a0bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48A0BCu;
    {
        const bool branch_taken_0x48a0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A0BCu;
        // 0x48a0c0: 0xa444000c  sh          $a0, 0xC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a0bc) {
            ctx->pc = 0x48A0D0u;
            goto label_48a0d0;
        }
    }
    ctx->pc = 0x48A0C4u;
    // 0x48a0c4: 0x0  nop
    ctx->pc = 0x48a0c4u;
    // NOP
label_48a0c8:
    // 0x48a0c8: 0x24a2d600  addiu       $v0, $a1, -0x2A00
    ctx->pc = 0x48a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956544));
    // 0x48a0cc: 0xa444000e  sh          $a0, 0xE($v0)
    ctx->pc = 0x48a0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 4));
label_48a0d0:
    // 0x48a0d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x48a0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x48a0d4: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x48a0d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x48a0d8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x48A0D8u;
    {
        const bool branch_taken_0x48a0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A0D8u;
        // 0x48a0dc: 0xc71007  srav        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a0d8) {
            ctx->pc = 0x48A030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48a030;
        }
    }
    ctx->pc = 0x48A0E0u;
    // 0x48a0e0: 0x24a2d600  addiu       $v0, $a1, -0x2A00
    ctx->pc = 0x48a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956544));
    // 0x48a0e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48a0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48a0e8: 0x8447000a  lh          $a3, 0xA($v0)
    ctx->pc = 0x48a0e8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x48a0ec: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48a0f0: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x48a0f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x48a0f4: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x48a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x48a0f8: 0xa462f930  sh          $v0, -0x6D0($v1)
    ctx->pc = 0x48a0f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F930u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F930u, _value); } while (0);
    // 0x48a0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x48A0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A0FCu;
        // 0x48a100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48A104u;
    // 0x48a104: 0x0  nop
    ctx->pc = 0x48a104u;
    // NOP
    ctx->pc = 0x48a108u;
}
