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

// Function: sub_00243FA8
// Address: 0x243fa8 - 0x244050
void sub_00243FA8_0x243fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243FA8_0x243fa8");
#endif

    switch (ctx->pc) {
        case 0x243ff4u: goto label_243ff4;
        case 0x244040u: goto label_244040;
        default: break;
    }

    ctx->pc = 0x243fa8u;

    // 0x243fa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x243fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x243fac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x243facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x243fb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x243fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x243fb4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x243fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x243fb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x243fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243fbc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x243fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x243fc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x243fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243fc4: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x243fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x243fc8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x243fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243fcc: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x243fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243fd0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x243fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x243fd4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x243fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x243fd8: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x243fd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x243fdc: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x243fdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x243fe0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x243fe0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243fe4: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x243fe4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243fe8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x243fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x243fec: 0xc090366  jal         func_240D98
    ctx->pc = 0x243FECu;
    SET_GPR_U32(ctx, 31, 0x243FF4u);
    ctx->pc = 0x243FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243FECu;
    // 0x243ff0: 0xffa30008  sd          $v1, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240D98u, 0x243FECu, 0x243FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243FF4u;
label_243ff4:
    // 0x243ff4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x243ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x243ff8: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x243ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x243ffc: 0x8c45679c  lw          $a1, 0x679C($v0)
    ctx->pc = 0x243ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x16679Cu));
    // 0x244000: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x244000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x244004: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x244004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x244008: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x244008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24400c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24400cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244010: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x244010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x244014: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x244014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244018: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x244018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24401c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24401cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244020: 0xdfa20020  ld          $v0, 0x20($sp)
    ctx->pc = 0x244020u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244024: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x244024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x244028: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x244028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24402c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x24402cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x244030: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x244030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x244034: 0xdfa20028  ld          $v0, 0x28($sp)
    ctx->pc = 0x244034u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244038: 0xc090372  jal         func_240DC8
    ctx->pc = 0x244038u;
    SET_GPR_U32(ctx, 31, 0x244040u);
    ctx->pc = 0x24403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244038u;
    // 0x24403c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240DC8u, 0x244038u, 0x244040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244040u;
label_244040:
    // 0x244040: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x244040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244044: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x244044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x244048: 0x3e00008  jr          $ra
    ctx->pc = 0x244048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244048u;
        // 0x24404c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244050u;
}
