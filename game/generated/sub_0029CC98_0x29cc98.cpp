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

// Function: sub_0029CC98
// Address: 0x29cc98 - 0x29ce18
void sub_0029CC98_0x29cc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CC98_0x29cc98");
#endif

    switch (ctx->pc) {
        case 0x29cce8u: goto label_29cce8;
        case 0x29cd30u: goto label_29cd30;
        case 0x29cd40u: goto label_29cd40;
        case 0x29cd48u: goto label_29cd48;
        case 0x29cd68u: goto label_29cd68;
        case 0x29cd7cu: goto label_29cd7c;
        case 0x29cd94u: goto label_29cd94;
        case 0x29cda8u: goto label_29cda8;
        case 0x29cdc0u: goto label_29cdc0;
        case 0x29cdd0u: goto label_29cdd0;
        default: break;
    }

    ctx->pc = 0x29cc98u;

    // 0x29cc98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29cc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29cc9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29cc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29cca0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29cca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x29cca4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29cca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29cca8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29cca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ccac: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x29ccacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x29ccb0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29ccb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ccb4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x29ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x29ccb8: 0x12a040  sll         $s4, $s2, 1
    ctx->pc = 0x29ccb8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x29ccbc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x29ccbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x29ccc0: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x29ccc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29ccc4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x29ccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x29ccc8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x29ccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x29cccc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x29ccccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x29ccd0: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x29ccd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x29ccd4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x29ccd4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x29ccd8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x29ccd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x29ccdc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x29ccdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x29cce0: 0xc0a7566  jal         func_29D598
    ctx->pc = 0x29CCE0u;
    SET_GPR_U32(ctx, 31, 0x29CCE8u);
    ctx->pc = 0x29CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CCE0u;
    // 0x29cce4: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D598u, 0x29CCE0u, 0x29CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CCE8u;
label_29cce8:
    // 0x29cce8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29cce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29ccec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29ccecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29ccf0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29ccf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29ccf4: 0x8e620154  lw          $v0, 0x154($s3)
    ctx->pc = 0x29ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
    // 0x29ccf8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x29ccf8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x29ccfc: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x29ccfcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x29cd00: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x29cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29cd04: 0x24510020  addiu       $s1, $v0, 0x20
    ctx->pc = 0x29cd04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x29cd08: 0x8c640070  lw          $a0, 0x70($v1)
    ctx->pc = 0x29cd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x29cd0c: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x29cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x29cd10: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x29cd10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x29cd14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29cd14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cd18: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x29cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x29cd1c: 0x245e0050  addiu       $fp, $v0, 0x50
    ctx->pc = 0x29cd1cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x29cd20: 0x24570080  addiu       $s7, $v0, 0x80
    ctx->pc = 0x29cd20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x29cd24: 0x245600a0  addiu       $s6, $v0, 0xA0
    ctx->pc = 0x29cd24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x29cd28: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29CD28u;
    SET_GPR_U32(ctx, 31, 0x29CD30u);
    ctx->pc = 0x29CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD28u;
    // 0x29cd2c: 0x245500c0  addiu       $s5, $v0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29CD28u, 0x29CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD30u;
label_29cd30:
    // 0x29cd30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29cd34: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29cd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29cd38: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29CD38u;
    SET_GPR_U32(ctx, 31, 0x29CD40u);
    ctx->pc = 0x29CD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD38u;
    // 0x29cd3c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29CD38u, 0x29CD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD40u;
label_29cd40:
    // 0x29cd40: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x29cd40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29cd44: 0x0  nop
    ctx->pc = 0x29cd44u;
    // NOP
label_29cd48:
    // 0x29cd48: 0x2918021  addu        $s0, $s4, $s1
    ctx->pc = 0x29cd48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x29cd4c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29cd4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cd50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29cd50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29cd54: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x29cd54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x29cd58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cd5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29cd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cd60: 0xc0a754c  jal         func_29D530
    ctx->pc = 0x29CD60u;
    SET_GPR_U32(ctx, 31, 0x29CD68u);
    ctx->pc = 0x29CD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD60u;
    // 0x29cd64: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D530u, 0x29CD60u, 0x29CD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD68u;
label_29cd68:
    // 0x29cd68: 0x21e1021  addu        $v0, $s0, $fp
    ctx->pc = 0x29cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x29cd6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29cd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29cd70: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x29cd70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x29cd74: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29CD74u;
    SET_GPR_U32(ctx, 31, 0x29CD7Cu);
    ctx->pc = 0x29CD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD74u;
    // 0x29cd78: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29CD74u, 0x29CD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD7Cu;
label_29cd7c:
    // 0x29cd7c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29cd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29cd80: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x29cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29cd84: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x29cd84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x29cd88: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x29cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x29cd8c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29CD8Cu;
    SET_GPR_U32(ctx, 31, 0x29CD94u);
    ctx->pc = 0x29CD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD8Cu;
    // 0x29cd90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29CD8Cu, 0x29CD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD94u;
label_29cd94:
    // 0x29cd94: 0x2171021  addu        $v0, $s0, $s7
    ctx->pc = 0x29cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x29cd98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29cd9c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29cd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29cda0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29CDA0u;
    SET_GPR_U32(ctx, 31, 0x29CDA8u);
    ctx->pc = 0x29CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CDA0u;
    // 0x29cda4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29CDA0u, 0x29CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CDA8u;
label_29cda8:
    // 0x29cda8: 0x2161021  addu        $v0, $s0, $s6
    ctx->pc = 0x29cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x29cdac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29cdb0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29cdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29cdb4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29cdb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29cdb8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29CDB8u;
    SET_GPR_U32(ctx, 31, 0x29CDC0u);
    ctx->pc = 0x29CDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CDB8u;
    // 0x29cdbc: 0x2158021  addu        $s0, $s0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29CDB8u, 0x29CDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CDC0u;
label_29cdc0:
    // 0x29cdc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29cdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29cdc4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29cdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29cdc8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29CDC8u;
    SET_GPR_U32(ctx, 31, 0x29CDD0u);
    ctx->pc = 0x29CDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CDC8u;
    // 0x29cdcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29CDC8u, 0x29CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CDD0u;
label_29cdd0:
    // 0x29cdd0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x29cdd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29cdd4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x29CDD4u;
    {
        const bool branch_taken_0x29cdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDD4u;
        // 0x29cdd8: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cdd4) {
            ctx->pc = 0x29CD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29cd48;
        }
    }
    ctx->pc = 0x29CDDCu;
    // 0x29cddc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29cddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29cde0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x29cde0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29cde4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29cde4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29cde8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x29cde8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29cdec: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x29cdecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29cdf0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x29cdf0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cdf4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x29cdf4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29cdf8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x29cdf8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29cdfc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x29cdfcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29ce00: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x29ce00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ce04: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x29ce04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29ce08: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x29ce08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29ce0c: 0x3e00008  jr          $ra
    ctx->pc = 0x29CE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE0Cu;
        // 0x29ce10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CE14u;
    // 0x29ce14: 0x0  nop
    ctx->pc = 0x29ce14u;
    // NOP
    ctx->pc = 0x29ce18u;
}
