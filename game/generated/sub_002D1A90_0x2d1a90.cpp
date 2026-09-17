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

// Function: sub_002D1A90
// Address: 0x2d1a90 - 0x2d1b68
void sub_002D1A90_0x2d1a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1A90_0x2d1a90");
#endif

    switch (ctx->pc) {
        case 0x2d1ac4u: goto label_2d1ac4;
        case 0x2d1ae0u: goto label_2d1ae0;
        case 0x2d1b40u: goto label_2d1b40;
        default: break;
    }

    ctx->pc = 0x2d1a90u;

    // 0x2d1a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d1a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d1a94: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2d1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2d1a98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d1a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d1a9c: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x2d1a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x2d1aa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d1aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d1aa4: 0x26513370  addiu       $s1, $s2, 0x3370
    ctx->pc = 0x2d1aa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 13168));
    // 0x2d1aa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d1aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d1aac: 0x2450a680  addiu       $s0, $v0, -0x5980
    ctx->pc = 0x2d1aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944384));
    // 0x2d1ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ab4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d1ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d1ab8: 0xae001000  sw          $zero, 0x1000($s0)
    ctx->pc = 0x2d1ab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x17B680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x17B680u, _value); } while (0);
    // 0x2d1abc: 0xc0a1396  jal         func_284E58
    ctx->pc = 0x2D1ABCu;
    SET_GPR_U32(ctx, 31, 0x2D1AC4u);
    ctx->pc = 0x2D1AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1ABCu;
    // 0x2d1ac0: 0xae002040  sw          $zero, 0x2040($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8256), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E58u, 0x2D1ABCu, 0x2D1AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1AC4u;
label_2d1ac4:
    // 0x2d1ac4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D1AC4u;
    {
        const bool branch_taken_0x2d1ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1AC4u;
        // 0x2d1ac8: 0x220602d  daddu       $t4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ac4) {
            ctx->pc = 0x2D1B48u;
            goto label_2d1b48;
        }
    }
    ctx->pc = 0x2D1ACCu;
    // 0x2d1acc: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2d1accu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ad0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d1ad0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ad4: 0x240e1000  addiu       $t6, $zero, 0x1000
    ctx->pc = 0x2d1ad4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2d1ad8: 0x240d0100  addiu       $t5, $zero, 0x100
    ctx->pc = 0x2d1ad8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d1adc: 0x258a0008  addiu       $t2, $t4, 0x8
    ctx->pc = 0x2d1adcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
label_2d1ae0:
    // 0x2d1ae0: 0x91180  sll         $v0, $t1, 6
    ctx->pc = 0x2d1ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x2d1ae4: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x2d1ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2d1ae8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2d1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2d1aec: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2d1aecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2d1af0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2d1af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d1af4: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x2d1af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2d1af8: 0x24451000  addiu       $a1, $v0, 0x1000
    ctx->pc = 0x2d1af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x2d1afc: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2d1afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2d1b00: 0x6a3821  addu        $a3, $v1, $t2
    ctx->pc = 0x2d1b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2d1b04: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x2d1b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2d1b08: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x2d1b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x2d1b0c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2d1b0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b10: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x2d1b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x2d1b14: 0x29260002  slti        $a2, $t1, 0x2
    ctx->pc = 0x2d1b14u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d1b18: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d1b18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d1b1c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2d1b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2d1b20: 0xac8e0000  sw          $t6, 0x0($a0)
    ctx->pc = 0x2d1b20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
    // 0x2d1b24: 0xad0d0000  sw          $t5, 0x0($t0)
    ctx->pc = 0x2d1b24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 13));
    // 0x2d1b28: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x2d1b28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x2d1b2c: 0x14c0ffec  bnez        $a2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2D1B2Cu;
    {
        const bool branch_taken_0x2d1b2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B2Cu;
        // 0x2d1b30: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b2c) {
            ctx->pc = 0x2D1AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1ae0;
        }
    }
    ctx->pc = 0x2D1B34u;
    // 0x2d1b34: 0x26443370  addiu       $a0, $s2, 0x3370
    ctx->pc = 0x2d1b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 13168));
    // 0x2d1b38: 0xc0a1418  jal         func_285060
    ctx->pc = 0x2D1B38u;
    SET_GPR_U32(ctx, 31, 0x2D1B40u);
    ctx->pc = 0x2D1B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1B38u;
    // 0x2d1b3c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285060u, 0x2D1B38u, 0x2D1B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B40u;
label_2d1b40:
    // 0x2d1b40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D1B40u;
    {
        const bool branch_taken_0x2d1b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B40u;
        // 0x2d1b44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b40) {
            ctx->pc = 0x2D1B4Cu;
            goto label_2d1b4c;
        }
    }
    ctx->pc = 0x2D1B48u;
label_2d1b48:
    // 0x2d1b48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d1b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1b4c:
    // 0x2d1b4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d1b4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1b50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d1b50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d1b54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d1b54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1b58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d1b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B5Cu;
        // 0x2d1b60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1B64u;
    // 0x2d1b64: 0x0  nop
    ctx->pc = 0x2d1b64u;
    // NOP
    ctx->pc = 0x2d1b68u;
}
