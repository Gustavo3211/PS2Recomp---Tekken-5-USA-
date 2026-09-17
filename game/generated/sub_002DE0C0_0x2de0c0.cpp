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

// Function: sub_002DE0C0
// Address: 0x2de0c0 - 0x2de158
void sub_002DE0C0_0x2de0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE0C0_0x2de0c0");
#endif

    switch (ctx->pc) {
        case 0x2de0f0u: goto label_2de0f0;
        case 0x2de10cu: goto label_2de10c;
        case 0x2de138u: goto label_2de138;
        default: break;
    }

    ctx->pc = 0x2de0c0u;

    // 0x2de0c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2de0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2de0c4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2de0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2de0c8: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x2de0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2de0cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2de0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de0d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2de0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2de0d4: 0x58e03  sra         $s1, $a1, 24
    ctx->pc = 0x2de0d4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 24));
    // 0x2de0d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2de0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2de0dc: 0x69603  sra         $s2, $a2, 24
    ctx->pc = 0x2de0dcu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 24));
    // 0x2de0e0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2de0e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2de0e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2de0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2de0e8: 0xc0b7630  jal         func_2DD8C0
    ctx->pc = 0x2DE0E8u;
    SET_GPR_U32(ctx, 31, 0x2DE0F0u);
    ctx->pc = 0x2DE0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE0E8u;
    // 0x2de0ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD8C0u, 0x2DE0E8u, 0x2DE0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE0F0u;
label_2de0f0:
    // 0x2de0f0: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2de0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x2de0f4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2de0f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2de0f8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DE0F8u;
    {
        const bool branch_taken_0x2de0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0F8u;
        // 0x2de0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de0f8) {
            ctx->pc = 0x2DE104u;
            goto label_2de104;
        }
    }
    ctx->pc = 0x2DE100u;
    // 0x2de100: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2de100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2de104:
    // 0x2de104: 0xc0b7630  jal         func_2DD8C0
    ctx->pc = 0x2DE104u;
    SET_GPR_U32(ctx, 31, 0x2DE10Cu);
    ctx->pc = 0x2DD8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD8C0u, 0x2DE104u, 0x2DE10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE10Cu;
label_2de10c:
    // 0x2de10c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2de10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2de110: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2de110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2de114: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2de114u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de118: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2de118u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2de11c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x2de11cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2de120: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2de120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2de124: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DE124u;
    {
        const bool branch_taken_0x2de124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE124u;
        // 0x2de128: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de124) {
            ctx->pc = 0x2DE130u;
            goto label_2de130;
        }
    }
    ctx->pc = 0x2DE12Cu;
    // 0x2de12c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2de12cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2de130:
    // 0x2de130: 0xc0c681a  jal         func_31A068
    ctx->pc = 0x2DE130u;
    SET_GPR_U32(ctx, 31, 0x2DE138u);
    ctx->pc = 0x2DE134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE130u;
    // 0x2de134: 0x46016b40  add.s       $f13, $f13, $f1 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A068u, 0x2DE130u, 0x2DE138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE138u;
label_2de138:
    // 0x2de138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2de138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de13c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2de13cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2de140: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2de140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de144: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2de144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2de148: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2de148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2de14c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE14Cu;
        // 0x2de150: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE154u;
    // 0x2de154: 0x0  nop
    ctx->pc = 0x2de154u;
    // NOP
    ctx->pc = 0x2de158u;
}
