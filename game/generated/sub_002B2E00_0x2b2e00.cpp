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

// Function: sub_002B2E00
// Address: 0x2b2e00 - 0x2b2f10
void sub_002B2E00_0x2b2e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2E00_0x2b2e00");
#endif

    switch (ctx->pc) {
        case 0x2b2ea0u: goto label_2b2ea0;
        case 0x2b2eacu: goto label_2b2eac;
        case 0x2b2ee4u: goto label_2b2ee4;
        default: break;
    }

    ctx->pc = 0x2b2e00u;

    // 0x2b2e00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b2e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b2e04: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2b2e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b2e08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b2e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b2e0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b2e0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2e10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2e14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b2e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b2e18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b2e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b2e1c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b2e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b2e20: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b2e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2b2e24: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2b2e24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b2e28: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x2b2e28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b2e2c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2E2Cu;
    {
        const bool branch_taken_0x2b2e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B2E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E2Cu;
        // 0x2b2e30: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e2c) {
            ctx->pc = 0x2B2E38u;
            goto label_2b2e38;
        }
    }
    ctx->pc = 0x2B2E34u;
    // 0x2b2e34: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2b2e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_2b2e38:
    // 0x2b2e38: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2b2e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b2e3c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B2E3Cu;
    {
        const bool branch_taken_0x2b2e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b2e3c) {
            ctx->pc = 0x2B2E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2E3Cu;
            // 0x2b2e40: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2E44u;
            goto label_2b2e44;
        }
    }
    ctx->pc = 0x2B2E44u;
label_2b2e44:
    // 0x2b2e44: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2b2e44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b2e48: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2b2e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b2e4c: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2b2e4cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x2b2e50: 0x2694cec8  addiu       $s4, $s4, -0x3138
    ctx->pc = 0x2b2e50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954696));
    // 0x2b2e54: 0x285a021  addu        $s4, $s4, $a1
    ctx->pc = 0x2b2e54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2b2e58: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2b2e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b2e5c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2b2e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b2e60: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x2b2e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b2e64: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2b2e64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2b2e68: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b2e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b2e6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B2E6Cu;
    {
        const bool branch_taken_0x2b2e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E6Cu;
        // 0x2b2e70: 0xb11021  addu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e6c) {
            ctx->pc = 0x2B2E90u;
            goto label_2b2e90;
        }
    }
    ctx->pc = 0x2B2E74u;
    // 0x2b2e74: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2b2e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2b2e78: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x2b2e78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x2b2e7c: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x2b2e7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b2e80: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b2e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2e84: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b2e84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b2e88: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2B2E88u;
    {
        const bool branch_taken_0x2b2e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E88u;
        // 0x2b2e8c: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e88) {
            ctx->pc = 0x2B2EE8u;
            goto label_2b2ee8;
        }
    }
    ctx->pc = 0x2B2E90u;
label_2b2e90:
    // 0x2b2e90: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b2e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b2e94: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b2e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b2e98: 0xc0aa626  jal         func_2A9898
    ctx->pc = 0x2B2E98u;
    SET_GPR_U32(ctx, 31, 0x2B2EA0u);
    ctx->pc = 0x2B2E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2E98u;
    // 0x2b2e9c: 0x24530018  addiu       $s3, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9898u, 0x2B2E98u, 0x2B2EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2EA0u;
label_2b2ea0:
    // 0x2b2ea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2ea4: 0xc0aa622  jal         func_2A9888
    ctx->pc = 0x2B2EA4u;
    SET_GPR_U32(ctx, 31, 0x2B2EACu);
    ctx->pc = 0x2B2EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2EA4u;
    // 0x2b2ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9888u, 0x2B2EA4u, 0x2B2EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2EACu;
label_2b2eac:
    // 0x2b2eac: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x2b2eacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x2b2eb0: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2b2eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2b2eb4: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2b2eb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2b2eb8: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b2eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2ebc: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b2ebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b2ec0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2b2ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b2ec4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b2ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b2ec8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2b2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b2ecc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b2eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b2ed0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2ED0u;
    {
        const bool branch_taken_0x2b2ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2ED0u;
        // 0x2b2ed4: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ed0) {
            ctx->pc = 0x2B2EE8u;
            goto label_2b2ee8;
        }
    }
    ctx->pc = 0x2B2ED8u;
    // 0x2b2ed8: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2b2ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2b2edc: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2B2EDCu;
    SET_GPR_U32(ctx, 31, 0x2B2EE4u);
    ctx->pc = 0x2B2EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2EDCu;
    // 0x2b2ee0: 0x248401a8  addiu       $a0, $a0, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2B2EDCu, 0x2B2EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2EE4u;
label_2b2ee4:
    // 0x2b2ee4: 0x0  nop
    ctx->pc = 0x2b2ee4u;
    // NOP
label_2b2ee8:
    // 0x2b2ee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2ee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2eec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b2eecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2ef0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b2ef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2ef4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b2ef4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2ef8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b2ef8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2efc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b2efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b2f00: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2b2f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b2f04: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F04u;
        // 0x2b2f08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2F0Cu;
    // 0x2b2f0c: 0x0  nop
    ctx->pc = 0x2b2f0cu;
    // NOP
    ctx->pc = 0x2b2f10u;
}
