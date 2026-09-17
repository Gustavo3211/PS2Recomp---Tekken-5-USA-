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

// Function: sub_0025EC90
// Address: 0x25ec90 - 0x25edd8
void sub_0025EC90_0x25ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EC90_0x25ec90");
#endif

    switch (ctx->pc) {
        case 0x25ed00u: goto label_25ed00;
        case 0x25ed60u: goto label_25ed60;
        case 0x25ed7cu: goto label_25ed7c;
        case 0x25ed8cu: goto label_25ed8c;
        default: break;
    }

    ctx->pc = 0x25ec90u;

    // 0x25ec90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25ec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25ec94: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25ec98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25ec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25ec9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25ec9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eca0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x25eca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x25eca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25eca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eca8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25ecac: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x25ecacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x25ecb0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x25ecb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x25ecb4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x25ecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x25ecb8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x25ecb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ecbc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x25ecbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x25ecc0: 0x24150040  addiu       $s5, $zero, 0x40
    ctx->pc = 0x25ecc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x25ecc4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x25ecc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x25ecc8: 0x245688d0  addiu       $s6, $v0, -0x7730
    ctx->pc = 0x25ecc8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x25eccc: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x25ecccu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x25ecd0: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x25ecd0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25ecd4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x25ecd4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x25ecd8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x25ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x25ecdc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x25ecdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25ece0: 0xc7958b84  lwc1        $f21, -0x747C($gp)
    ctx->pc = 0x25ece0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25ece4: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x25ece4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x25ece8: 0xc7978b88  lwc1        $f23, -0x7478($gp)
    ctx->pc = 0x25ece8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25ecec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25ececu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25ecf0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x25ecf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x25ecf4: 0x24730750  addiu       $s3, $v1, 0x750
    ctx->pc = 0x25ecf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1872));
    // 0x25ecf8: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x25ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x25ecfc: 0x0  nop
    ctx->pc = 0x25ecfcu;
    // NOP
label_25ed00:
    // 0x25ed00: 0x2151804  sllv        $v1, $s5, $s0
    ctx->pc = 0x25ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 16) & 0x1F));
    // 0x25ed04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25ed04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25ed08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25ED08u;
    {
        const bool branch_taken_0x25ed08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED08u;
        // 0x25ed0c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed08) {
            ctx->pc = 0x25ED20u;
            goto label_25ed20;
        }
    }
    ctx->pc = 0x25ED10u;
    // 0x25ed10: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x25ed10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x25ed14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ed18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25ED18u;
    {
        const bool branch_taken_0x25ed18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED18u;
        // 0x25ed1c: 0xc45401e4  lwc1        $f20, 0x1E4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed18) {
            ctx->pc = 0x25ED24u;
            goto label_25ed24;
        }
    }
    ctx->pc = 0x25ED20u;
label_25ed20:
    // 0x25ed20: 0xc7948b8c  lwc1        $f20, -0x7474($gp)
    ctx->pc = 0x25ed20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25ed24:
    // 0x25ed24: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x25ed24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ed28: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25ED28u;
    {
        const bool branch_taken_0x25ed28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ed28) {
            ctx->pc = 0x25ED2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25ED28u;
            // 0x25ed2c: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25ED30u;
            goto label_25ed30;
        }
    }
    ctx->pc = 0x25ED30u;
label_25ed30:
    // 0x25ed30: 0x4617a034  c.lt.s      $f20, $f23
    ctx->pc = 0x25ed30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ed34: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x25ED34u;
    {
        const bool branch_taken_0x25ed34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED34u;
        // 0x25ed38: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed34) {
            ctx->pc = 0x25ED48u;
            goto label_25ed48;
        }
    }
    ctx->pc = 0x25ED3Cu;
    // 0x25ed3c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25ed40: 0x10540012  beq         $v0, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x25ED40u;
    {
        const bool branch_taken_0x25ed40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x25ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED40u;
        // 0x25ed44: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed40) {
            ctx->pc = 0x25ED8Cu;
            goto label_25ed8c;
        }
    }
    ctx->pc = 0x25ED48u;
label_25ed48:
    // 0x25ed48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25ed48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed4c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x25ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x25ed50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25ed50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed54: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x25ed54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ed58: 0xc084784  jal         func_211E10
    ctx->pc = 0x25ED58u;
    SET_GPR_U32(ctx, 31, 0x25ED60u);
    ctx->pc = 0x25ED5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED58u;
    // 0x25ed5c: 0x24c60790  addiu       $a2, $a2, 0x790 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x25ED58u, 0x25ED60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED60u;
label_25ed60:
    // 0x25ed60: 0x4614a300  add.s       $f12, $f20, $f20
    ctx->pc = 0x25ed60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x25ed64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25ed64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed68: 0x0  nop
    ctx->pc = 0x25ed68u;
    // NOP
    // 0x25ed6c: 0x0  nop
    ctx->pc = 0x25ed6cu;
    // NOP
    // 0x25ed70: 0x460cb303  div.s       $f12, $f22, $f12
    ctx->pc = 0x25ed70u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[12] = ctx->f[22] / ctx->f[12];
    // 0x25ed74: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x25ED74u;
    SET_GPR_U32(ctx, 31, 0x25ED7Cu);
    ctx->pc = 0x25ED78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED74u;
    // 0x25ed78: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x25ED74u, 0x25ED7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED7Cu;
label_25ed7c:
    // 0x25ed7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25ed7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25ed80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed84: 0xc084774  jal         func_211DD0
    ctx->pc = 0x25ED84u;
    SET_GPR_U32(ctx, 31, 0x25ED8Cu);
    ctx->pc = 0x25ED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED84u;
    // 0x25ed88: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x25ED84u, 0x25ED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED8Cu;
label_25ed8c:
    // 0x25ed8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25ed8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25ed90: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x25ed90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25ed94: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x25ED94u;
    {
        const bool branch_taken_0x25ed94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ed94) {
            ctx->pc = 0x25ED98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25ED94u;
            // 0x25ed98: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25ED00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ed00;
        }
    }
    ctx->pc = 0x25ED9Cu;
    // 0x25ed9c: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x25ed9cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x25eda0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25eda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25eda4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x25eda4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25eda8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25eda8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25edac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x25edacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25edb0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x25edb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25edb4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x25edb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x25edb8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x25edb8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25edbc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x25edbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x25edc0: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x25edc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25edc4: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x25edc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25edc8: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x25edc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25edcc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x25edccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25edd0: 0x3e00008  jr          $ra
    ctx->pc = 0x25EDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDD0u;
        // 0x25edd4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EDD8u;
}
