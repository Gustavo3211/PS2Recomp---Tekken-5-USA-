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

// Function: sub_00276F08
// Address: 0x276f08 - 0x277080
void sub_00276F08_0x276f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276F08_0x276f08");
#endif

    switch (ctx->pc) {
        case 0x276f30u: goto label_276f30;
        default: break;
    }

    ctx->pc = 0x276f08u;

    // 0x276f08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276f0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x276f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x276f10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276f14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x276f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x276f18: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x276f18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x276f1c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x276f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x276f20: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x276F20u;
    {
        const bool branch_taken_0x276f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276F20u;
        // 0x276f24: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f20) {
            ctx->pc = 0x277068u;
            goto label_277068;
        }
    }
    ctx->pc = 0x276F28u;
    // 0x276f28: 0xc09d940  jal         func_276500
    ctx->pc = 0x276F28u;
    SET_GPR_U32(ctx, 31, 0x276F30u);
    ctx->pc = 0x276F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276F28u;
    // 0x276f2c: 0x9490003c  lhu         $s0, 0x3C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x276F28u, 0x276F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F30u;
label_276f30:
    // 0x276f30: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x276F30u;
    {
        const bool branch_taken_0x276f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276F30u;
        // 0x276f34: 0x2625fffe  addiu       $a1, $s1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f30) {
            ctx->pc = 0x276FD0u;
            goto label_276fd0;
        }
    }
    ctx->pc = 0x276F38u;
    // 0x276f38: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x276f38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x276f3c: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x276F3Cu;
    {
        const bool branch_taken_0x276f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276f3c) {
            ctx->pc = 0x276F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276F3Cu;
            // 0x276f40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27706Cu;
            goto label_27706c;
        }
    }
    ctx->pc = 0x276F44u;
    // 0x276f44: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x276f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x276f48: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x276f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x276f4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x276f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x276f50: 0x8c633c50  lw          $v1, 0x3C50($v1)
    ctx->pc = 0x276f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15440)));
    // 0x276f54: 0x600008  jr          $v1
    ctx->pc = 0x276F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276F60u: goto label_276f60;
            case 0x276F88u: goto label_276f88;
            case 0x276FB0u: goto label_276fb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276F54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x276F5Cu;
    // 0x276f5c: 0x0  nop
    ctx->pc = 0x276f5cu;
    // NOP
label_276f60:
    // 0x276f60: 0x8f84ca68  lw          $a0, -0x3598($gp)
    ctx->pc = 0x276f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x276f64: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x276f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x276f68: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x276f68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x276f6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x276f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x276f70: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x276f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x276f74: 0xbc0821  addu        $at, $a1, $gp
    ctx->pc = 0x276f74u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 28)));
    // 0x276f78: 0xac23a868  sw          $v1, -0x5798($at)
    ctx->pc = 0x276f78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944872), GPR_U32(ctx, 3));
    // 0x276f7c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x276F7Cu;
    {
        const bool branch_taken_0x276f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276F7Cu;
        // 0x276f80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f7c) {
            ctx->pc = 0x27706Cu;
            goto label_27706c;
        }
    }
    ctx->pc = 0x276F84u;
    // 0x276f84: 0x0  nop
    ctx->pc = 0x276f84u;
    // NOP
label_276f88:
    // 0x276f88: 0x8f84ca68  lw          $a0, -0x3598($gp)
    ctx->pc = 0x276f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x276f8c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x276f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x276f90: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x276f90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x276f94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x276f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x276f98: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x276f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x276f9c: 0xbc0821  addu        $at, $a1, $gp
    ctx->pc = 0x276f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 28)));
    // 0x276fa0: 0xac23a868  sw          $v1, -0x5798($at)
    ctx->pc = 0x276fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944872), GPR_U32(ctx, 3));
    // 0x276fa4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x276FA4u;
    {
        const bool branch_taken_0x276fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276FA4u;
        // 0x276fa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276fa4) {
            ctx->pc = 0x27706Cu;
            goto label_27706c;
        }
    }
    ctx->pc = 0x276FACu;
    // 0x276fac: 0x0  nop
    ctx->pc = 0x276facu;
    // NOP
label_276fb0:
    // 0x276fb0: 0x8f82ca68  lw          $v0, -0x3598($gp)
    ctx->pc = 0x276fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x276fb4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x276fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x276fb8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x276fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x276fbc: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x276fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x276fc0: 0x9c0821  addu        $at, $a0, $gp
    ctx->pc = 0x276fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x276fc4: 0xac23a868  sw          $v1, -0x5798($at)
    ctx->pc = 0x276fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944872), GPR_U32(ctx, 3));
    // 0x276fc8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x276FC8u;
    {
        const bool branch_taken_0x276fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276FC8u;
        // 0x276fcc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276fc8) {
            ctx->pc = 0x27706Cu;
            goto label_27706c;
        }
    }
    ctx->pc = 0x276FD0u;
label_276fd0:
    // 0x276fd0: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x276fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x276fd4: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x276FD4u;
    {
        const bool branch_taken_0x276fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276fd4) {
            ctx->pc = 0x276FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276FD4u;
            // 0x276fd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27706Cu;
            goto label_27706c;
        }
    }
    ctx->pc = 0x276FDCu;
    // 0x276fdc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x276fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x276fe0: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x276fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x276fe4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x276fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x276fe8: 0x8c633c70  lw          $v1, 0x3C70($v1)
    ctx->pc = 0x276fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15472)));
    // 0x276fec: 0x600008  jr          $v1
    ctx->pc = 0x276FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FF8u: goto label_276ff8;
            case 0x277018u: goto label_277018;
            case 0x277050u: goto label_277050;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276FECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x276FF4u;
    // 0x276ff4: 0x0  nop
    ctx->pc = 0x276ff4u;
    // NOP
label_276ff8:
    // 0x276ff8: 0x8f84ca68  lw          $a0, -0x3598($gp)
    ctx->pc = 0x276ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x276ffc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x276ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x277000: 0x7c2821  addu        $a1, $v1, $gp
    ctx->pc = 0x277000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x277004: 0x8ca5a868  lw          $a1, -0x5798($a1)
    ctx->pc = 0x277004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294944872)));
    // 0x277008: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x277008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x27700c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x277010: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x277010u;
    {
        const bool branch_taken_0x277010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277010u;
        // 0x277014: 0xac450020  sw          $a1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277010) {
            ctx->pc = 0x277068u;
            goto label_277068;
        }
    }
    ctx->pc = 0x277018u;
label_277018:
    // 0x277018: 0x8f83973c  lw          $v1, -0x68C4($gp)
    ctx->pc = 0x277018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    // 0x27701c: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x27701cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x277020: 0x8f87ca68  lw          $a3, -0x3598($gp)
    ctx->pc = 0x277020u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x277024: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x277024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x277028: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x277028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27702c: 0xbc3021  addu        $a2, $a1, $gp
    ctx->pc = 0x27702cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 28)));
    // 0x277030: 0x8cc6a868  lw          $a2, -0x5798($a2)
    ctx->pc = 0x277030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944872)));
    // 0x277034: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x277034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x277038: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x277038u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27703c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27703cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x277040: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x277040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x277044: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x277044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x277048: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x277048u;
    {
        const bool branch_taken_0x277048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277048u;
        // 0x27704c: 0xac860024  sw          $a2, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277048) {
            ctx->pc = 0x277068u;
            goto label_277068;
        }
    }
    ctx->pc = 0x277050u;
label_277050:
    // 0x277050: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x277050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x277054: 0x8f83ca68  lw          $v1, -0x3598($gp)
    ctx->pc = 0x277054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x277058: 0x5c2021  addu        $a0, $v0, $gp
    ctx->pc = 0x277058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x27705c: 0x8c84a868  lw          $a0, -0x5798($a0)
    ctx->pc = 0x27705cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944872)));
    // 0x277060: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x277060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277064: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x277064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
label_277068:
    // 0x277068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x277068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27706c:
    // 0x27706c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27706cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x277070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x277070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277074: 0x3e00008  jr          $ra
    ctx->pc = 0x277074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277074u;
        // 0x277078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27707Cu;
    // 0x27707c: 0x0  nop
    ctx->pc = 0x27707cu;
    // NOP
    ctx->pc = 0x277080u;
}
