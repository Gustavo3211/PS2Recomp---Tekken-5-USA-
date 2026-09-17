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

// Function: sub_00201CD0
// Address: 0x201cd0 - 0x201d8c
void sub_00201CD0_0x201cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201CD0_0x201cd0");
#endif

    switch (ctx->pc) {
        case 0x201d40u: goto label_201d40;
        default: break;
    }

    ctx->pc = 0x201cd0u;

    // 0x201cd0: 0x24a5fffd  addiu       $a1, $a1, -0x3
    ctx->pc = 0x201cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x201cd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201cd8: 0x2ca20012  sltiu       $v0, $a1, 0x12
    ctx->pc = 0x201cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x201cdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201ce0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x201ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x201ce4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x201CE4u;
    {
        const bool branch_taken_0x201ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CE4u;
        // 0x201ce8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ce4) {
            ctx->pc = 0x201D8Cu;
            return;
        }
    }
    ctx->pc = 0x201CECu;
    // 0x201cec: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x201cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x201cf0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x201cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x201cf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x201cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201cf8: 0x8c633a70  lw          $v1, 0x3A70($v1)
    ctx->pc = 0x201cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14960)));
    // 0x201cfc: 0x600008  jr          $v1
    ctx->pc = 0x201CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201D08u: goto label_201d08;
            case 0x201D10u: goto label_201d10;
            case 0x201D18u: goto label_201d18;
            case 0x201D20u: goto label_201d20;
            case 0x201D28u: goto label_201d28;
            case 0x201D30u: goto label_201d30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201CFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x201D04u;
    // 0x201d04: 0x0  nop
    ctx->pc = 0x201d04u;
    // NOP
label_201d08:
    // 0x201d08: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x201D08u;
    {
        const bool branch_taken_0x201d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D08u;
        // 0x201d0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d08) {
            ctx->pc = 0x201D34u;
            goto label_201d34;
        }
    }
    ctx->pc = 0x201D10u;
label_201d10:
    // 0x201d10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x201D10u;
    {
        const bool branch_taken_0x201d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D10u;
        // 0x201d14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d10) {
            ctx->pc = 0x201D34u;
            goto label_201d34;
        }
    }
    ctx->pc = 0x201D18u;
label_201d18:
    // 0x201d18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x201D18u;
    {
        const bool branch_taken_0x201d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D18u;
        // 0x201d1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d18) {
            ctx->pc = 0x201D34u;
            goto label_201d34;
        }
    }
    ctx->pc = 0x201D20u;
label_201d20:
    // 0x201d20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x201D20u;
    {
        const bool branch_taken_0x201d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D20u;
        // 0x201d24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d20) {
            ctx->pc = 0x201D34u;
            goto label_201d34;
        }
    }
    ctx->pc = 0x201D28u;
label_201d28:
    // 0x201d28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x201D28u;
    {
        const bool branch_taken_0x201d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D28u;
        // 0x201d2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d28) {
            ctx->pc = 0x201D34u;
            goto label_201d34;
        }
    }
    ctx->pc = 0x201D30u;
label_201d30:
    // 0x201d30: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x201d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_201d34:
    // 0x201d34: 0x9484003c  lhu         $a0, 0x3C($a0)
    ctx->pc = 0x201d34u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x201d38: 0xc0af812  jal         func_2BE048
    ctx->pc = 0x201D38u;
    SET_GPR_U32(ctx, 31, 0x201D40u);
    ctx->pc = 0x201D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201D38u;
    // 0x201d3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE048u, 0x201D38u, 0x201D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D40u;
label_201d40:
    // 0x201d40: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x201d40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x201d44: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x201d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201d48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x201d48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x201d4c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x201D4Cu;
    {
        const bool branch_taken_0x201d4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x201D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D4Cu;
        // 0x201d50: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d4c) {
            ctx->pc = 0x201D70u;
            goto label_201d70;
        }
    }
    ctx->pc = 0x201D54u;
    // 0x201d54: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x201d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201d58: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x201d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x201d5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x201d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x201d60: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x201d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x201d64: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x201d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201d68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x201D68u;
    {
        const bool branch_taken_0x201d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D68u;
        // 0x201d6c: 0x46011081  sub.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d68) {
            ctx->pc = 0x201D88u;
            goto label_201d88;
        }
    }
    ctx->pc = 0x201D70u;
label_201d70:
    // 0x201d70: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x201d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201d74: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x201d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x201d78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x201d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x201d7c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x201d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x201d80: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x201d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201d84: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x201d84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_201d88:
    // 0x201d88: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x201d88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->pc = 0x201d8cu;
}
