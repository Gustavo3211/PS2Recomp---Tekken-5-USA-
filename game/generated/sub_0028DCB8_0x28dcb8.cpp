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

// Function: sub_0028DCB8
// Address: 0x28dcb8 - 0x28de48
void sub_0028DCB8_0x28dcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DCB8_0x28dcb8");
#endif

    switch (ctx->pc) {
        case 0x28dd10u: goto label_28dd10;
        case 0x28dd20u: goto label_28dd20;
        case 0x28dd28u: goto label_28dd28;
        case 0x28dd40u: goto label_28dd40;
        case 0x28dd50u: goto label_28dd50;
        case 0x28dd70u: goto label_28dd70;
        case 0x28dd88u: goto label_28dd88;
        case 0x28dda8u: goto label_28dda8;
        case 0x28dde0u: goto label_28dde0;
        case 0x28ddf8u: goto label_28ddf8;
        default: break;
    }

    ctx->pc = 0x28dcb8u;

    // 0x28dcb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28dcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28dcbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28dcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dcc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28dcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28dcc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28dcc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dcc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28dcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28dccc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28dcccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dcd0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x28dcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x28dcd4: 0x2677000c  addiu       $s7, $s3, 0xC
    ctx->pc = 0x28dcd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x28dcd8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x28dcd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x28dcdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28dcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28dce0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28dce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28dce4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x28dce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x28dce8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x28dce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x28dcec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x28dcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x28dcf0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x28dcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x28dcf4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x28dcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x28dcf8: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x28dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x28dcfc: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x28dcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x28dd00: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x28dd00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x28dd04: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28dd04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28dd08: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x28DD08u;
    SET_GPR_U32(ctx, 31, 0x28DD10u);
    ctx->pc = 0x28DD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD08u;
    // 0x28dd0c: 0xae600030  sw          $zero, 0x30($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x28DD08u, 0x28DD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD10u;
label_28dd10:
    // 0x28dd10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28dd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dd14: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x28dd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x28dd18: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x28DD18u;
    SET_GPR_U32(ctx, 31, 0x28DD20u);
    ctx->pc = 0x28DD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD18u;
    // 0x28dd1c: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x28DD18u, 0x28DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD20u;
label_28dd20:
    // 0x28dd20: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x28dd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x28dd24: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x28dd24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_28dd28:
    // 0x28dd28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28dd28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28dd2c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x28dd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x28dd30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28dd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dd34: 0x2f08021  addu        $s0, $s7, $s0
    ctx->pc = 0x28dd34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x28dd38: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x28DD38u;
    SET_GPR_U32(ctx, 31, 0x28DD40u);
    ctx->pc = 0x28DD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD38u;
    // 0x28dd3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x28DD38u, 0x28DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD40u;
label_28dd40:
    // 0x28dd40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28dd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28dd44: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x28dd44u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x28dd48: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28DD48u;
    SET_GPR_U32(ctx, 31, 0x28DD50u);
    ctx->pc = 0x28DD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD48u;
    // 0x28dd4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28DD48u, 0x28DD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD50u;
label_28dd50:
    // 0x28dd50: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x28dd50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28dd54: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x28DD54u;
    {
        const bool branch_taken_0x28dd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dd54) {
            ctx->pc = 0x28DD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DD54u;
            // 0x28dd58: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28dd28;
        }
    }
    ctx->pc = 0x28DD5Cu;
    // 0x28dd5c: 0x8e640044  lw          $a0, 0x44($s3)
    ctx->pc = 0x28dd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x28dd60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28dd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dd64: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28dd64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dd68: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x28DD68u;
    SET_GPR_U32(ctx, 31, 0x28DD70u);
    ctx->pc = 0x28DD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD68u;
    // 0x28dd6c: 0x241eefff  addiu       $fp, $zero, -0x1001 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x28DD68u, 0x28DD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD70u;
label_28dd70:
    // 0x28dd70: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x28dd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x28dd74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28dd74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28dd78: 0x26750004  addiu       $s5, $s3, 0x4
    ctx->pc = 0x28dd78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x28dd7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28dd7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28dd80: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x28dd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x28dd84: 0x16a080  sll         $s4, $s6, 2
    ctx->pc = 0x28dd84u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_28dd88:
    // 0x28dd88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28dd88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dd8c: 0x2971021  addu        $v0, $s4, $s7
    ctx->pc = 0x28dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x28dd90: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x28dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x28dd94: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x28dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28dd98: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x28dd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x28dd9c: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x28dd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
    // 0x28dda0: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x28dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x28dda4: 0x0  nop
    ctx->pc = 0x28dda4u;
    // NOP
label_28dda8:
    // 0x28dda8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28dda8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28ddac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28ddb0: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x28ddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x28ddb4: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x28ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x28ddb8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28ddbc: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x28ddbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x28ddc0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x28ddc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28ddc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ddc8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28DDC8u;
    {
        const bool branch_taken_0x28ddc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DDC8u;
        // 0x28ddcc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ddc8) {
            ctx->pc = 0x28DDF8u;
            goto label_28ddf8;
        }
    }
    ctx->pc = 0x28DDD0u;
    // 0x28ddd0: 0x8e710038  lw          $s1, 0x38($s3)
    ctx->pc = 0x28ddd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x28ddd4: 0x8cb00060  lw          $s0, 0x60($a1)
    ctx->pc = 0x28ddd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x28ddd8: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28DDD8u;
    SET_GPR_U32(ctx, 31, 0x28DDE0u);
    ctx->pc = 0x28DDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DDD8u;
    // 0x28dddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28DDD8u, 0x28DDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DDE0u;
label_28dde0:
    // 0x28dde0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28dde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dde4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28dde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dde8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DDE8u;
    {
        const bool branch_taken_0x28dde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DDE8u;
        // 0x28ddec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dde8) {
            ctx->pc = 0x28DDF8u;
            goto label_28ddf8;
        }
    }
    ctx->pc = 0x28DDF0u;
    // 0x28ddf0: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28DDF0u;
    SET_GPR_U32(ctx, 31, 0x28DDF8u);
    ctx->pc = 0x28DDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DDF0u;
    // 0x28ddf4: 0x8e240130  lw          $a0, 0x130($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28DDF0u, 0x28DDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DDF8u;
label_28ddf8:
    // 0x28ddf8: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x28ddf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28ddfc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x28DDFCu;
    {
        const bool branch_taken_0x28ddfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DDFCu;
        // 0x28de00: 0x2921021  addu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ddfc) {
            ctx->pc = 0x28DDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28dda8;
        }
    }
    ctx->pc = 0x28DE04u;
    // 0x28de04: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x28de04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x28de08: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x28de08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28de0c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x28DE0Cu;
    {
        const bool branch_taken_0x28de0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE0Cu;
        // 0x28de10: 0x16a080  sll         $s4, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de0c) {
            ctx->pc = 0x28DD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28dd88;
        }
    }
    ctx->pc = 0x28DE14u;
    // 0x28de14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28de14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28de18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28de18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28de1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28de1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28de20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28de20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28de24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x28de24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28de28: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x28de28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28de2c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x28de2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28de30: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x28de30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28de34: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x28de34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28de38: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x28de38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28de3c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x28de3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28de40: 0x3e00008  jr          $ra
    ctx->pc = 0x28DE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE40u;
        // 0x28de44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DE48u;
}
