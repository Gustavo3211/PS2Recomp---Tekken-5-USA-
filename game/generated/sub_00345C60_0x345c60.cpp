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

// Function: sub_00345C60
// Address: 0x345c60 - 0x345da0
void sub_00345C60_0x345c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345C60_0x345c60");
#endif

    switch (ctx->pc) {
        case 0x345cc0u: goto label_345cc0;
        case 0x345ce8u: goto label_345ce8;
        case 0x345d00u: goto label_345d00;
        case 0x345d24u: goto label_345d24;
        case 0x345d3cu: goto label_345d3c;
        case 0x345d80u: goto label_345d80;
        default: break;
    }

    ctx->pc = 0x345c60u;

    // 0x345c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x345c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x345c64: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x345c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x345c68: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x345c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x345c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345c70: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x345c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x345c74: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x345c74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345c78: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x345c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x345c7c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x345c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x345c80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x345c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x345c84: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x345c84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x345c88: 0x9202001e  lbu         $v0, 0x1E($s0)
    ctx->pc = 0x345c88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x345c8c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x345C8Cu;
    {
        const bool branch_taken_0x345c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x345C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C8Cu;
        // 0x345c90: 0xc6140020  lwc1        $f20, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345c8c) {
            ctx->pc = 0x345C9Cu;
            goto label_345c9c;
        }
    }
    ctx->pc = 0x345C94u;
    // 0x345c94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x345c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x345c98: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x345c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_345c9c:
    // 0x345c9c: 0xc7809678  lwc1        $f0, -0x6988($gp)
    ctx->pc = 0x345c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345ca0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x345ca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345ca4: 0x45030037  bc1tl       . + 4 + (0x37 << 2)
    ctx->pc = 0x345CA4u;
    {
        const bool branch_taken_0x345ca4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x345ca4) {
            ctx->pc = 0x345CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345CA4u;
            // 0x345ca8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345D84u;
            goto label_345d84;
        }
    }
    ctx->pc = 0x345CACu;
    // 0x345cac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x345cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x345cb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x345cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345cb4: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x345cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x345cb8: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x345cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x345cbc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x345cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_345cc0:
    // 0x345cc0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x345cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x345cc4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x345cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x345cc8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x345CC8u;
    {
        const bool branch_taken_0x345cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345CC8u;
        // 0x345ccc: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345cc8) {
            ctx->pc = 0x345D48u;
            goto label_345d48;
        }
    }
    ctx->pc = 0x345CD0u;
    // 0x345cd0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x345cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x345cd4: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x345cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x345cd8: 0x0  nop
    ctx->pc = 0x345cd8u;
    // NOP
    // 0x345cdc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x345CDCu;
    {
        const bool branch_taken_0x345cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345CDCu;
        // 0x345ce0: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345cdc) {
            ctx->pc = 0x345CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345cc0;
        }
    }
    ctx->pc = 0x345CE4u;
    // 0x345ce4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x345ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345ce8:
    // 0x345ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x345ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345cec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x345cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345cf0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x345cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345cf4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x345cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345cf8: 0xc0d25b4  jal         func_3496D0
    ctx->pc = 0x345CF8u;
    SET_GPR_U32(ctx, 31, 0x345D00u);
    ctx->pc = 0x345CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345CF8u;
    // 0x345cfc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3496D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3496D0u, 0x345CF8u, 0x345D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D00u;
label_345d00:
    // 0x345d00: 0xc780967c  lwc1        $f0, -0x6984($gp)
    ctx->pc = 0x345d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345d04: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x345d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345d08: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x345D08u;
    {
        const bool branch_taken_0x345d08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x345D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345D08u;
        // 0x345d0c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345d08) {
            ctx->pc = 0x345D68u;
            goto label_345d68;
        }
    }
    ctx->pc = 0x345D10u;
    // 0x345d10: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x345d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x345d14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x345d14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x345d18: 0x24840d00  addiu       $a0, $a0, 0xD00
    ctx->pc = 0x345d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3328));
    // 0x345d1c: 0xc0d1ce0  jal         func_347380
    ctx->pc = 0x345D1Cu;
    SET_GPR_U32(ctx, 31, 0x345D24u);
    ctx->pc = 0x345D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345D1Cu;
    // 0x345d20: 0x248401f4  addiu       $a0, $a0, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347380u, 0x345D1Cu, 0x345D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D24u;
label_345d24:
    // 0x345d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x345d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345d28: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x345d28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345d2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x345d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345d30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x345d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345d34: 0xc0d28e8  jal         func_34A3A0
    ctx->pc = 0x345D34u;
    SET_GPR_U32(ctx, 31, 0x345D3Cu);
    ctx->pc = 0x345D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345D34u;
    // 0x345d38: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A3A0u, 0x345D34u, 0x345D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D3Cu;
label_345d3c:
    // 0x345d3c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x345D3Cu;
    {
        const bool branch_taken_0x345d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345D3Cu;
        // 0x345d40: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345d3c) {
            ctx->pc = 0x345D84u;
            goto label_345d84;
        }
    }
    ctx->pc = 0x345D44u;
    // 0x345d44: 0x0  nop
    ctx->pc = 0x345d44u;
    // NOP
label_345d48:
    // 0x345d48: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x345d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x345d4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345d50: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x345d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x345d54: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x345d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x345d58: 0x3c117000  lui         $s1, 0x7000
    ctx->pc = 0x345d58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28672 << 16));
    // 0x345d5c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x345d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x345d60: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x345D60u;
    {
        const bool branch_taken_0x345d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345D60u;
        // 0x345d64: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345d60) {
            ctx->pc = 0x345CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345ce8;
        }
    }
    ctx->pc = 0x345D68u;
label_345d68:
    // 0x345d68: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x345d68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x345d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345d70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x345d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345d74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x345d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345d78: 0xc0d27f2  jal         func_349FC8
    ctx->pc = 0x345D78u;
    SET_GPR_U32(ctx, 31, 0x345D80u);
    ctx->pc = 0x345D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345D78u;
    // 0x345d7c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349FC8u, 0x345D78u, 0x345D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D80u;
label_345d80:
    // 0x345d80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x345d80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_345d84:
    // 0x345d84: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x345d84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x345d88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x345d88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x345d8c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x345d8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345d90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x345d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x345d94: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x345d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x345d98: 0x3e00008  jr          $ra
    ctx->pc = 0x345D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345D98u;
        // 0x345d9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345DA0u;
}
