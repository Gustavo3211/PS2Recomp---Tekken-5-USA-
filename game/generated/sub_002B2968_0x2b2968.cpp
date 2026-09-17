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

// Function: sub_002B2968
// Address: 0x2b2968 - 0x2b2a78
void sub_002B2968_0x2b2968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2968_0x2b2968");
#endif

    switch (ctx->pc) {
        case 0x2b2a08u: goto label_2b2a08;
        case 0x2b2a14u: goto label_2b2a14;
        case 0x2b2a4cu: goto label_2b2a4c;
        default: break;
    }

    ctx->pc = 0x2b2968u;

    // 0x2b2968: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b2968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b296c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2b296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b2970: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b2970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b2974: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b2974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2978: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b297c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b297cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b2980: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b2980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b2984: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b2984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b2988: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b2988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2b298c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2b298cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b2990: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x2b2990u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b2994: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2994u;
    {
        const bool branch_taken_0x2b2994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B2998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2994u;
        // 0x2b2998: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2994) {
            ctx->pc = 0x2B29A0u;
            goto label_2b29a0;
        }
    }
    ctx->pc = 0x2B299Cu;
    // 0x2b299c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2b299cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_2b29a0:
    // 0x2b29a0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2b29a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b29a4: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B29A4u;
    {
        const bool branch_taken_0x2b29a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b29a4) {
            ctx->pc = 0x2B29A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B29A4u;
            // 0x2b29a8: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B29ACu;
            goto label_2b29ac;
        }
    }
    ctx->pc = 0x2B29ACu;
label_2b29ac:
    // 0x2b29ac: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2b29acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b29b0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2b29b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b29b4: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2b29b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x2b29b8: 0x2694cec8  addiu       $s4, $s4, -0x3138
    ctx->pc = 0x2b29b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954696));
    // 0x2b29bc: 0x285a021  addu        $s4, $s4, $a1
    ctx->pc = 0x2b29bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2b29c0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2b29c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b29c4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2b29c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b29c8: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x2b29c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b29cc: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2b29ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2b29d0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b29d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b29d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B29D4u;
    {
        const bool branch_taken_0x2b29d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29D4u;
        // 0x2b29d8: 0xb11021  addu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29d4) {
            ctx->pc = 0x2B29F8u;
            goto label_2b29f8;
        }
    }
    ctx->pc = 0x2B29DCu;
    // 0x2b29dc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2b29dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2b29e0: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x2b29e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x2b29e4: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x2b29e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b29e8: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b29e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b29ec: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b29ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b29f0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2B29F0u;
    {
        const bool branch_taken_0x2b29f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29F0u;
        // 0x2b29f4: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29f0) {
            ctx->pc = 0x2B2A50u;
            goto label_2b2a50;
        }
    }
    ctx->pc = 0x2B29F8u;
label_2b29f8:
    // 0x2b29f8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b29f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b29fc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b29fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b2a00: 0xc0aa626  jal         func_2A9898
    ctx->pc = 0x2B2A00u;
    SET_GPR_U32(ctx, 31, 0x2B2A08u);
    ctx->pc = 0x2B2A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2A00u;
    // 0x2b2a04: 0x24530018  addiu       $s3, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9898u, 0x2B2A00u, 0x2B2A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2A08u;
label_2b2a08:
    // 0x2b2a08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2a0c: 0xc0aa622  jal         func_2A9888
    ctx->pc = 0x2B2A0Cu;
    SET_GPR_U32(ctx, 31, 0x2B2A14u);
    ctx->pc = 0x2B2A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2A0Cu;
    // 0x2b2a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9888u, 0x2B2A0Cu, 0x2B2A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2A14u;
label_2b2a14:
    // 0x2b2a14: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x2b2a14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x2b2a18: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2b2a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2b2a1c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2b2a1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2b2a20: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b2a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2a24: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b2a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b2a28: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2b2a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b2a2c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b2a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b2a30: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2b2a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b2a34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b2a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b2a38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2A38u;
    {
        const bool branch_taken_0x2b2a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A38u;
        // 0x2b2a3c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2a38) {
            ctx->pc = 0x2B2A50u;
            goto label_2b2a50;
        }
    }
    ctx->pc = 0x2B2A40u;
    // 0x2b2a40: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2b2a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2b2a44: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2B2A44u;
    SET_GPR_U32(ctx, 31, 0x2B2A4Cu);
    ctx->pc = 0x2B2A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2A44u;
    // 0x2b2a48: 0x24840168  addiu       $a0, $a0, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2B2A44u, 0x2B2A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2A4Cu;
label_2b2a4c:
    // 0x2b2a4c: 0x0  nop
    ctx->pc = 0x2b2a4cu;
    // NOP
label_2b2a50:
    // 0x2b2a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2a54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b2a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2a58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b2a58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2a5c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b2a5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2a60: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b2a60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2a64: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b2a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b2a68: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2b2a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b2a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A6Cu;
        // 0x2b2a70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2A74u;
    // 0x2b2a74: 0x0  nop
    ctx->pc = 0x2b2a74u;
    // NOP
    ctx->pc = 0x2b2a78u;
}
