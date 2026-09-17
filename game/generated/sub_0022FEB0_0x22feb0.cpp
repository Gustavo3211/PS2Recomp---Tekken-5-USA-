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

// Function: sub_0022FEB0
// Address: 0x22feb0 - 0x22ff70
void sub_0022FEB0_0x22feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FEB0_0x22feb0");
#endif

    switch (ctx->pc) {
        case 0x22fed0u: goto label_22fed0;
        case 0x22ff34u: goto label_22ff34;
        case 0x22ff54u: goto label_22ff54;
        default: break;
    }

    ctx->pc = 0x22feb0u;

    // 0x22feb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22feb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22feb4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x22feb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x22feb8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x22feb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x22febc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22febcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fec0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x22fec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x22fec4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x22fec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x22fec8: 0xc08beea  jal         func_22FBA8
    ctx->pc = 0x22FEC8u;
    SET_GPR_U32(ctx, 31, 0x22FED0u);
    ctx->pc = 0x22FECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FEC8u;
    // 0x22fecc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FBA8u, 0x22FEC8u, 0x22FED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FED0u;
label_22fed0:
    // 0x22fed0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22fed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fed4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22fed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22fed8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x22fed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22fedc: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x22fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x22fee0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22fee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fee4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22fee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fee8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22fee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22feec: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x22feecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fef0: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x22fef0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x22fef4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x22fef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x22fef8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x22fef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x22fefc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x22fefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ff00: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x22ff00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x22ff04: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x22ff04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x22ff08: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x22ff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ff0c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x22ff0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x22ff10: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x22ff10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x22ff14: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x22ff14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x22ff18: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x22ff18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22ff1c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x22ff1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ff20: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x22ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ff24: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22ff24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22ff28: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x22ff28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22ff2c: 0xc094dcc  jal         func_253730
    ctx->pc = 0x22FF2Cu;
    SET_GPR_U32(ctx, 31, 0x22FF34u);
    ctx->pc = 0x22FF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF2Cu;
    // 0x22ff30: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x253730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253730u, 0x22FF2Cu, 0x22FF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF34u;
label_22ff34:
    // 0x22ff34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ff38: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x22ff38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x22ff3c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x22ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x22ff40: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x22ff40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x22ff44: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x22ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x22ff48: 0x8c8488d0  lw          $a0, -0x7730($a0)
    ctx->pc = 0x22ff48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936784)));
    // 0x22ff4c: 0xc092a2e  jal         func_24A8B8
    ctx->pc = 0x22FF4Cu;
    SET_GPR_U32(ctx, 31, 0x22FF54u);
    ctx->pc = 0x24A8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A8B8u, 0x22FF4Cu, 0x22FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF54u;
label_22ff54:
    // 0x22ff54: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x22ff54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ff58: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x22ff58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22ff5c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x22ff5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ff60: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x22ff60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ff64: 0x3e00008  jr          $ra
    ctx->pc = 0x22FF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF64u;
        // 0x22ff68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FF6Cu;
    // 0x22ff6c: 0x0  nop
    ctx->pc = 0x22ff6cu;
    // NOP
    ctx->pc = 0x22ff70u;
}
