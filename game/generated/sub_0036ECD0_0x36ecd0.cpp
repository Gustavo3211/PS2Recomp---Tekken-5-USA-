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

// Function: sub_0036ECD0
// Address: 0x36ecd0 - 0x36ed78
void sub_0036ECD0_0x36ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036ECD0_0x36ecd0");
#endif

    switch (ctx->pc) {
        case 0x36ed1cu: goto label_36ed1c;
        case 0x36ed34u: goto label_36ed34;
        case 0x36ed60u: goto label_36ed60;
        default: break;
    }

    ctx->pc = 0x36ecd0u;

    // 0x36ecd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36ecd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36ecd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ecdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36ecdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ece0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36ece0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36ece4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36ece4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36ece8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x36ece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x36ecec: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x36ececu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x36ecf0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x36ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x36ecf4: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x36ecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x36ecf8: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x36ecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x36ecfc: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x36ecfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x36ed00: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36ed04: 0x2442ec58  addiu       $v0, $v0, -0x13A8
    ctx->pc = 0x36ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x36ed08: 0x26120074  addiu       $s2, $s0, 0x74
    ctx->pc = 0x36ed08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x36ed0c: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x36ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x36ed10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36ed10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed14: 0xc0c1126  jal         func_304498
    ctx->pc = 0x36ED14u;
    SET_GPR_U32(ctx, 31, 0x36ED1Cu);
    ctx->pc = 0x36ED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ED14u;
    // 0x36ed18: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304498u, 0x36ED14u, 0x36ED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ED1Cu;
label_36ed1c:
    // 0x36ed1c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36ed20: 0x261100b4  addiu       $s1, $s0, 0xB4
    ctx->pc = 0x36ed20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    // 0x36ed24: 0x2442ed18  addiu       $v0, $v0, -0x12E8
    ctx->pc = 0x36ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962456));
    // 0x36ed28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36ed28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed2c: 0xc0bf854  jal         func_2FE150
    ctx->pc = 0x36ED2Cu;
    SET_GPR_U32(ctx, 31, 0x36ED34u);
    ctx->pc = 0x36ED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ED2Cu;
    // 0x36ed30: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE150u, 0x36ED2Cu, 0x36ED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ED34u;
label_36ed34:
    // 0x36ed34: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36ed38: 0x2442ed60  addiu       $v0, $v0, -0x12A0
    ctx->pc = 0x36ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962528));
    // 0x36ed3c: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x36ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x36ed40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36ED40u;
    {
        const bool branch_taken_0x36ed40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ED40u;
        // 0x36ed44: 0xae510038  sw          $s1, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ed40) {
            ctx->pc = 0x36ED60u;
            goto label_36ed60;
        }
    }
    ctx->pc = 0x36ED48u;
    // 0x36ed48: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36ed4c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x36ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x36ed50: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36ed54: 0x24840488  addiu       $a0, $a0, 0x488
    ctx->pc = 0x36ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1160));
    // 0x36ed58: 0xc048b90  jal         func_122E40
    ctx->pc = 0x36ED58u;
    SET_GPR_U32(ctx, 31, 0x36ED60u);
    ctx->pc = 0x36ED5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ED58u;
    // 0x36ed5c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x36ED58u, 0x36ED60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ED60u;
label_36ed60:
    // 0x36ed60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36ed60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ed64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36ed64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ed68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36ed68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ed6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36ed6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ed70: 0x3e00008  jr          $ra
    ctx->pc = 0x36ED70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ED70u;
        // 0x36ed74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ED70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36ED78u;
}
