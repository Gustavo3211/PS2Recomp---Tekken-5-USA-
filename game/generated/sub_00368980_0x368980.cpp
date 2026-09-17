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

// Function: sub_00368980
// Address: 0x368980 - 0x3689e8
void sub_00368980_0x368980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368980_0x368980");
#endif

    switch (ctx->pc) {
        case 0x3689a4u: goto label_3689a4;
        case 0x3689c4u: goto label_3689c4;
        default: break;
    }

    ctx->pc = 0x368980u;

    // 0x368980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x368980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x368984: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x368984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x368988: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x368988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36898c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36898cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x368990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x368990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368994: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x368994u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x368998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x368998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36899c: 0xc0da49a  jal         func_369268
    ctx->pc = 0x36899Cu;
    SET_GPR_U32(ctx, 31, 0x3689A4u);
    ctx->pc = 0x3689A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36899Cu;
    // 0x3689a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369268u, 0x36899Cu, 0x3689A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3689A4u;
label_3689a4:
    // 0x3689a4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3689a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3689a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3689a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3689ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3689acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3689b0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3689b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3689b4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3689B4u;
    {
        const bool branch_taken_0x3689b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3689B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3689B4u;
        // 0x3689b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3689b4) {
            ctx->pc = 0x3689CCu;
            goto label_3689cc;
        }
    }
    ctx->pc = 0x3689BCu;
    // 0x3689bc: 0xc0da34a  jal         func_368D28
    ctx->pc = 0x3689BCu;
    SET_GPR_U32(ctx, 31, 0x3689C4u);
    ctx->pc = 0x368D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368D28u, 0x3689BCu, 0x3689C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3689C4u;
label_3689c4:
    // 0x3689c4: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x3689c4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
    // 0x3689c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3689c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3689cc:
    // 0x3689cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3689ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3689d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3689d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3689d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3689d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3689d8: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x3689d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3689dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3689DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3689E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3689DCu;
        // 0x3689e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3689DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3689E4u;
    // 0x3689e4: 0x0  nop
    ctx->pc = 0x3689e4u;
    // NOP
    ctx->pc = 0x3689e8u;
}
