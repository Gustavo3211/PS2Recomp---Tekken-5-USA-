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

// Function: sub_002B2A78
// Address: 0x2b2a78 - 0x2b2b88
void sub_002B2A78_0x2b2a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2A78_0x2b2a78");
#endif

    switch (ctx->pc) {
        case 0x2b2b18u: goto label_2b2b18;
        case 0x2b2b24u: goto label_2b2b24;
        case 0x2b2b5cu: goto label_2b2b5c;
        default: break;
    }

    ctx->pc = 0x2b2a78u;

    // 0x2b2a78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b2a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b2a7c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2b2a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b2a80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b2a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b2a84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b2a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2a88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2a8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b2a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b2a90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b2a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b2a94: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b2a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b2a98: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b2a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2b2a9c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2b2a9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b2aa0: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x2b2aa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b2aa4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2AA4u;
    {
        const bool branch_taken_0x2b2aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B2AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AA4u;
        // 0x2b2aa8: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2aa4) {
            ctx->pc = 0x2B2AB0u;
            goto label_2b2ab0;
        }
    }
    ctx->pc = 0x2B2AACu;
    // 0x2b2aac: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2b2aacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_2b2ab0:
    // 0x2b2ab0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2b2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b2ab4: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B2AB4u;
    {
        const bool branch_taken_0x2b2ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b2ab4) {
            ctx->pc = 0x2B2AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2AB4u;
            // 0x2b2ab8: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2ABCu;
            goto label_2b2abc;
        }
    }
    ctx->pc = 0x2B2ABCu;
label_2b2abc:
    // 0x2b2abc: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2b2abcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b2ac0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2b2ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b2ac4: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2b2ac4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x2b2ac8: 0x2694cec8  addiu       $s4, $s4, -0x3138
    ctx->pc = 0x2b2ac8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954696));
    // 0x2b2acc: 0x285a021  addu        $s4, $s4, $a1
    ctx->pc = 0x2b2accu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2b2ad0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2b2ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b2ad4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2b2ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b2ad8: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x2b2ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b2adc: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2b2adcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2b2ae0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b2ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b2ae4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B2AE4u;
    {
        const bool branch_taken_0x2b2ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AE4u;
        // 0x2b2ae8: 0xb11021  addu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ae4) {
            ctx->pc = 0x2B2B08u;
            goto label_2b2b08;
        }
    }
    ctx->pc = 0x2B2AECu;
    // 0x2b2aec: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2b2aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2b2af0: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x2b2af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x2b2af4: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x2b2af4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b2af8: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b2af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2afc: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b2afcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b2b00: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2B2B00u;
    {
        const bool branch_taken_0x2b2b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B00u;
        // 0x2b2b04: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b00) {
            ctx->pc = 0x2B2B60u;
            goto label_2b2b60;
        }
    }
    ctx->pc = 0x2B2B08u;
label_2b2b08:
    // 0x2b2b08: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b2b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b2b0c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b2b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b2b10: 0xc0aa626  jal         func_2A9898
    ctx->pc = 0x2B2B10u;
    SET_GPR_U32(ctx, 31, 0x2B2B18u);
    ctx->pc = 0x2B2B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2B10u;
    // 0x2b2b14: 0x24530018  addiu       $s3, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9898u, 0x2B2B10u, 0x2B2B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2B18u;
label_2b2b18:
    // 0x2b2b18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2b1c: 0xc0aa622  jal         func_2A9888
    ctx->pc = 0x2B2B1Cu;
    SET_GPR_U32(ctx, 31, 0x2B2B24u);
    ctx->pc = 0x2B2B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2B1Cu;
    // 0x2b2b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9888u, 0x2B2B1Cu, 0x2B2B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2B24u;
label_2b2b24:
    // 0x2b2b24: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x2b2b24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x2b2b28: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2b2b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2b2b2c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2b2b2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2b2b30: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b2b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2b34: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b2b34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b2b38: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2b2b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b2b3c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b2b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b2b40: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2b2b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b2b44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b2b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b2b48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2B48u;
    {
        const bool branch_taken_0x2b2b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B48u;
        // 0x2b2b4c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b48) {
            ctx->pc = 0x2B2B60u;
            goto label_2b2b60;
        }
    }
    ctx->pc = 0x2B2B50u;
    // 0x2b2b50: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2b2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2b2b54: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2B2B54u;
    SET_GPR_U32(ctx, 31, 0x2B2B5Cu);
    ctx->pc = 0x2B2B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2B54u;
    // 0x2b2b58: 0x24840178  addiu       $a0, $a0, 0x178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2B2B54u, 0x2B2B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2B5Cu;
label_2b2b5c:
    // 0x2b2b5c: 0x0  nop
    ctx->pc = 0x2b2b5cu;
    // NOP
label_2b2b60:
    // 0x2b2b60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2b64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b2b64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2b68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b2b68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2b6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b2b6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2b70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b2b70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2b74: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b2b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b2b78: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2b2b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b2b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B7Cu;
        // 0x2b2b80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2B84u;
    // 0x2b2b84: 0x0  nop
    ctx->pc = 0x2b2b84u;
    // NOP
    ctx->pc = 0x2b2b88u;
}
