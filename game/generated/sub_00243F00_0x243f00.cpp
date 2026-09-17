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

// Function: sub_00243F00
// Address: 0x243f00 - 0x243fa8
void sub_00243F00_0x243f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243F00_0x243f00");
#endif

    switch (ctx->pc) {
        case 0x243f4cu: goto label_243f4c;
        case 0x243f98u: goto label_243f98;
        default: break;
    }

    ctx->pc = 0x243f00u;

    // 0x243f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x243f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x243f04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x243f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x243f08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x243f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x243f0c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x243f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x243f10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x243f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243f14: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x243f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x243f18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x243f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243f1c: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x243f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x243f20: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x243f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243f24: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x243f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243f28: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x243f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x243f2c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x243f2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x243f30: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x243f30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x243f34: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x243f34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x243f38: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x243f38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243f3c: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x243f3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243f40: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x243f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x243f44: 0xc090378  jal         func_240DE0
    ctx->pc = 0x243F44u;
    SET_GPR_U32(ctx, 31, 0x243F4Cu);
    ctx->pc = 0x243F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F44u;
    // 0x243f48: 0xffa30008  sd          $v1, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240DE0u, 0x243F44u, 0x243F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F4Cu;
label_243f4c:
    // 0x243f4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x243f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x243f50: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x243f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x243f54: 0x8c45679c  lw          $a1, 0x679C($v0)
    ctx->pc = 0x243f54u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x16679Cu));
    // 0x243f58: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x243f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x243f5c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x243f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x243f60: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x243f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x243f64: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x243f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243f68: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x243f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x243f6c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x243f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243f70: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x243f70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x243f74: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x243f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243f78: 0xdfa20020  ld          $v0, 0x20($sp)
    ctx->pc = 0x243f78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243f7c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x243f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x243f80: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x243f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243f84: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x243f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x243f88: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x243f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x243f8c: 0xdfa20028  ld          $v0, 0x28($sp)
    ctx->pc = 0x243f8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x243f90: 0xc090380  jal         func_240E00
    ctx->pc = 0x243F90u;
    SET_GPR_U32(ctx, 31, 0x243F98u);
    ctx->pc = 0x243F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F90u;
    // 0x243f94: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240E00u, 0x243F90u, 0x243F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F98u;
label_243f98:
    // 0x243f98: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x243f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243f9c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x243f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x243fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x243FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FA0u;
        // 0x243fa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243FA8u;
}
