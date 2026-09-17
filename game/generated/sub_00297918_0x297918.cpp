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

// Function: sub_00297918
// Address: 0x297918 - 0x2979b0
void sub_00297918_0x297918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297918_0x297918");
#endif

    switch (ctx->pc) {
        case 0x297994u: goto label_297994;
        case 0x2979a0u: goto label_2979a0;
        default: break;
    }

    ctx->pc = 0x297918u;

    // 0x297918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29791c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x29791cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297920: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297924: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x297924u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x297928: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x297928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29792c: 0x2610c4b0  addiu       $s0, $s0, -0x3B50
    ctx->pc = 0x29792cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952112));
    // 0x297930: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x297930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x297934: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x297934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297938: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x297938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x29793c: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x29793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297944: 0x240400f5  addiu       $a0, $zero, 0xF5
    ctx->pc = 0x297944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x297948: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x297948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3BC4B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BC4B8u, _value); } while (0); }
    // 0x29794c: 0x68c20027  ldl         $v0, 0x27($a2)
    ctx->pc = 0x29794cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x297950: 0x6cc20020  ldr         $v0, 0x20($a2)
    ctx->pc = 0x297950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x297954: 0x68c7002f  ldl         $a3, 0x2F($a2)
    ctx->pc = 0x297954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x297958: 0x6cc70028  ldr         $a3, 0x28($a2)
    ctx->pc = 0x297958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x29795c: 0xb2020037  sdl         $v0, 0x37($s0)
    ctx->pc = 0x29795cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297960: 0xb6020030  sdr         $v0, 0x30($s0)
    ctx->pc = 0x297960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297964: 0xb207003f  sdl         $a3, 0x3F($s0)
    ctx->pc = 0x297964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297968: 0xb6070038  sdr         $a3, 0x38($s0)
    ctx->pc = 0x297968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29796c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x29796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297970: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x297970u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BC4F0u));
    // 0x297974: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x297974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x297978: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x297978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29797c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x29797cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x297980: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x297980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x297984: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x297984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x297988: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29798c: 0xc0c8328  jal         func_320CA0
    ctx->pc = 0x29798Cu;
    SET_GPR_U32(ctx, 31, 0x297994u);
    ctx->pc = 0x297990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29798Cu;
    // 0x297990: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320CA0u, 0x29798Cu, 0x297994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297994u;
label_297994:
    // 0x297994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297998: 0xc0c96de  jal         func_325B78
    ctx->pc = 0x297998u;
    SET_GPR_U32(ctx, 31, 0x2979A0u);
    ctx->pc = 0x29799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297998u;
    // 0x29799c: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B78u, 0x297998u, 0x2979A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2979A0u;
label_2979a0:
    // 0x2979a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2979a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2979a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2979a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2979a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2979A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2979ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979A8u;
        // 0x2979ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2979A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2979B0u;
}
