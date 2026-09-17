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

// Function: sub_002565E8
// Address: 0x2565e8 - 0x256688
void sub_002565E8_0x2565e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002565E8_0x2565e8");
#endif

    switch (ctx->pc) {
        case 0x256648u: goto label_256648;
        case 0x256674u: goto label_256674;
        default: break;
    }

    ctx->pc = 0x2565e8u;

    // 0x2565e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2565e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2565ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2565ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2565f0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2565f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2565f4: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2565f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2565f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2565f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2565fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2565fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x256600: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x256600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x256604: 0x65800a  movz        $s0, $v1, $a1
    ctx->pc = 0x256604u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x256608: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x256608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25660c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x25660cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256610: 0x8c820894  lw          $v0, 0x894($a0)
    ctx->pc = 0x256610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2196)));
    // 0x256614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256618: 0x8c51001c  lw          $s1, 0x1C($v0)
    ctx->pc = 0x256618u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x25661c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x25661cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x256620: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x256620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x256624: 0x26222050  addiu       $v0, $s1, 0x2050
    ctx->pc = 0x256624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8272));
    // 0x256628: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x256628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x25662c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x25662cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256630: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x256630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x256634: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x256634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256638: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x256638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25663c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x25663cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256640: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x256640u;
    SET_GPR_U32(ctx, 31, 0x256648u);
    ctx->pc = 0x256644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256640u;
    // 0x256644: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x256640u, 0x256648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256648u;
label_256648:
    // 0x256648: 0x262228c0  addiu       $v0, $s1, 0x28C0
    ctx->pc = 0x256648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 10432));
    // 0x25664c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x25664cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256650: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x256650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256658: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x256658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25665c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x25665cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x256660: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x256660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256664: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x256664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x256668: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x256668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25666c: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x25666Cu;
    SET_GPR_U32(ctx, 31, 0x256674u);
    ctx->pc = 0x256670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25666Cu;
    // 0x256670: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x25666Cu, 0x256674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256674u;
label_256674:
    // 0x256674: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x256674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256678: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x256678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x25667c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25667cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256680: 0x3e00008  jr          $ra
    ctx->pc = 0x256680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256680u;
        // 0x256684: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256688u;
}
