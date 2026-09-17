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

// Function: sub_002FDD90
// Address: 0x2fdd90 - 0x2fde58
void sub_002FDD90_0x2fdd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDD90_0x2fdd90");
#endif

    switch (ctx->pc) {
        case 0x2fddc8u: goto label_2fddc8;
        case 0x2fddd4u: goto label_2fddd4;
        case 0x2fddecu: goto label_2fddec;
        case 0x2fde10u: goto label_2fde10;
        case 0x2fde28u: goto label_2fde28;
        default: break;
    }

    ctx->pc = 0x2fdd90u;

    // 0x2fdd90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fdd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fdd94: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2fdd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fdd98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fdd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fdd9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fdd9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdda0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fdda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fdda4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fdda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fdda8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fdda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fddac: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x2fddacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2fddb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fddb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2fddb4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2fddb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2fddb8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2fddb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2fddbc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fddbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fddc0: 0xc09362a  jal         func_24D8A8
    ctx->pc = 0x2FDDC0u;
    SET_GPR_U32(ctx, 31, 0x2FDDC8u);
    ctx->pc = 0x2FDDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDDC0u;
    // 0x2fddc4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D8A8u, 0x2FDDC0u, 0x2FDDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDDC8u;
label_2fddc8:
    // 0x2fddc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fddc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fddcc: 0xc0bf1a8  jal         func_2FC6A0
    ctx->pc = 0x2FDDCCu;
    SET_GPR_U32(ctx, 31, 0x2FDDD4u);
    ctx->pc = 0x2FDDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDDCCu;
    // 0x2fddd0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC6A0u, 0x2FDDCCu, 0x2FDDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDDD4u;
label_2fddd4:
    // 0x2fddd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fddd8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2fddd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fdddc: 0x26540010  addiu       $s4, $s2, 0x10
    ctx->pc = 0x2fdddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2fdde0: 0x26530020  addiu       $s3, $s2, 0x20
    ctx->pc = 0x2fdde0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2fdde4: 0xc0bf1a8  jal         func_2FC6A0
    ctx->pc = 0x2FDDE4u;
    SET_GPR_U32(ctx, 31, 0x2FDDECu);
    ctx->pc = 0x2FDDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDDE4u;
    // 0x2fdde8: 0x7e430000  sq          $v1, 0x0($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC6A0u, 0x2FDDE4u, 0x2FDDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDDECu;
label_2fddec:
    // 0x2fddec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fddecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fddf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fddf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fddf4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2fddf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fddf8: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x2fddf8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
    // 0x2fddfc: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x2fddfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x2fde00: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x2fde00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fde04: 0x5a00000c  blezl       $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FDE04u;
    {
        const bool branch_taken_0x2fde04 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2fde04) {
            ctx->pc = 0x2FDE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDE04u;
            // 0x2fde08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDE38u;
            goto label_2fde38;
        }
    }
    ctx->pc = 0x2FDE0Cu;
    // 0x2fde0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fde0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fde10:
    // 0x2fde10: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x2fde10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2fde14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fde14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fde18: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2fde18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fde1c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2fde1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fde20: 0xc0bf6c8  jal         func_2FDB20
    ctx->pc = 0x2FDE20u;
    SET_GPR_U32(ctx, 31, 0x2FDE28u);
    ctx->pc = 0x2FDE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDE20u;
    // 0x2fde24: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB20u, 0x2FDE20u, 0x2FDE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDE28u;
label_2fde28:
    // 0x2fde28: 0x2b0102a  slt         $v0, $s5, $s0
    ctx->pc = 0x2fde28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2fde2c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2FDE2Cu;
    {
        const bool branch_taken_0x2fde2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE2Cu;
        // 0x2fde30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde2c) {
            ctx->pc = 0x2FDE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fde10;
        }
    }
    ctx->pc = 0x2FDE34u;
    // 0x2fde34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fde34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fde38:
    // 0x2fde38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fde38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fde3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fde3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fde40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fde40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fde44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2fde44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fde48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2fde48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fde4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2fde4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fde50: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE50u;
        // 0x2fde54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDE58u;
}
