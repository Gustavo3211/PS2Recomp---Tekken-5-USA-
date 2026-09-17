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

// Function: sub_0021CE70
// Address: 0x21ce70 - 0x21cfc8
void sub_0021CE70_0x21ce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CE70_0x21ce70");
#endif

    switch (ctx->pc) {
        case 0x21ced0u: goto label_21ced0;
        case 0x21cee4u: goto label_21cee4;
        case 0x21cee8u: goto label_21cee8;
        case 0x21cf10u: goto label_21cf10;
        case 0x21cf30u: goto label_21cf30;
        case 0x21cf70u: goto label_21cf70;
        default: break;
    }

    ctx->pc = 0x21ce70u;

    // 0x21ce70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21ce70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21ce74: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x21ce74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x21ce78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21ce78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21ce7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21ce7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21ce80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21ce80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21ce84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21ce84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21ce88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x21ce8c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x21ce8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x21ce90: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x21ce90u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x21ce94: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x21ce94u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x21ce98: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x21ce98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x21ce9c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x21ce9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cea0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x21cea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x21cea4: 0x26b60017  addiu       $s6, $s5, 0x17
    ctx->pc = 0x21cea4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 23));
    // 0x21cea8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x21cea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x21ceac: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x21ceacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ceb0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x21ceb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x21ceb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ceb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ceb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21ceb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21cebc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21cebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21cec0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21cec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21cec4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x21cec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x21cec8: 0xc0cc57e  jal         func_3315F8
    ctx->pc = 0x21CEC8u;
    SET_GPR_U32(ctx, 31, 0x21CED0u);
    ctx->pc = 0x21CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CEC8u;
    // 0x21cecc: 0x241e003c  addiu       $fp, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3315F8u, 0x21CEC8u, 0x21CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CED0u;
label_21ced0:
    // 0x21ced0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x21ced0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21ced4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x21ced4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x21ced8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x21ced8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x21cedc: 0xc0cc586  jal         func_331618
    ctx->pc = 0x21CEDCu;
    SET_GPR_U32(ctx, 31, 0x21CEE4u);
    ctx->pc = 0x21CEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CEDCu;
    // 0x21cee0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331618u, 0x21CEDCu, 0x21CEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CEE4u;
label_21cee4:
    // 0x21cee4: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x21cee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_21cee8:
    // 0x21cee8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x21cee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ceec: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x21ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x21cef0: 0x3d3200b  movn        $a0, $fp, $s3
    ctx->pc = 0x21cef0u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 30));
    // 0x21cef4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21cef8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x21cef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21cefc: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x21cefcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x21cf00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21cf00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf04: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x21cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x21cf08: 0xc0cc58e  jal         func_331638
    ctx->pc = 0x21CF08u;
    SET_GPR_U32(ctx, 31, 0x21CF10u);
    ctx->pc = 0x21CF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CF08u;
    // 0x21cf0c: 0x245000fd  addiu       $s0, $v0, 0xFD (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 253));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331638u, 0x21CF08u, 0x21CF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CF10u;
label_21cf10:
    // 0x21cf10: 0x9204000c  lbu         $a0, 0xC($s0)
    ctx->pc = 0x21cf10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21cf14: 0x5080001b  beql        $a0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x21CF14u;
    {
        const bool branch_taken_0x21cf14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cf14) {
            ctx->pc = 0x21CF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CF14u;
            // 0x21cf18: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CF84u;
            goto label_21cf84;
        }
    }
    ctx->pc = 0x21CF1Cu;
    // 0x21cf1c: 0x262200f0  addiu       $v0, $s1, 0xF0
    ctx->pc = 0x21cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x21cf20: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x21cf20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21cf24: 0x2c28821  addu        $s1, $s6, $v0
    ctx->pc = 0x21cf24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x21cf28: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x21cf28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x21cf2c: 0x0  nop
    ctx->pc = 0x21cf2cu;
    // NOP
label_21cf30:
    // 0x21cf30: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x21cf30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x21cf34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CF34u;
    {
        const bool branch_taken_0x21cf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF34u;
        // 0x21cf38: 0x2121821  addu        $v1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf34) {
            ctx->pc = 0x21CF48u;
            goto label_21cf48;
        }
    }
    ctx->pc = 0x21CF3Cu;
    // 0x21cf3c: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x21cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x21cf40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21CF40u;
    {
        const bool branch_taken_0x21cf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF40u;
        // 0x21cf44: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf40) {
            ctx->pc = 0x21CF68u;
            goto label_21cf68;
        }
    }
    ctx->pc = 0x21CF48u;
label_21cf48:
    // 0x21cf48: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x21cf48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21cf4c: 0x50540009  beql        $v0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x21CF4Cu;
    {
        const bool branch_taken_0x21cf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x21cf4c) {
            ctx->pc = 0x21CF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CF4Cu;
            // 0x21cf50: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CF74u;
            goto label_21cf74;
        }
    }
    ctx->pc = 0x21CF54u;
    // 0x21cf54: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x21cf54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21cf58: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x21cf58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21cf5c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21CF5Cu;
    {
        const bool branch_taken_0x21cf5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cf5c) {
            ctx->pc = 0x21CF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CF5Cu;
            // 0x21cf60: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CF74u;
            goto label_21cf74;
        }
    }
    ctx->pc = 0x21CF64u;
    // 0x21cf64: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x21cf64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_21cf68:
    // 0x21cf68: 0xc086346  jal         func_218D18
    ctx->pc = 0x21CF68u;
    SET_GPR_U32(ctx, 31, 0x21CF70u);
    ctx->pc = 0x21CF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CF68u;
    // 0x21cf6c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218D18u, 0x21CF68u, 0x21CF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CF70u;
label_21cf70:
    // 0x21cf70: 0x9204000c  lbu         $a0, 0xC($s0)
    ctx->pc = 0x21cf70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_21cf74:
    // 0x21cf74: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x21cf74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x21cf78: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x21CF78u;
    {
        const bool branch_taken_0x21cf78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cf78) {
            ctx->pc = 0x21CF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CF78u;
            // 0x21cf7c: 0x92020009  lbu         $v0, 0x9($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cf30;
        }
    }
    ctx->pc = 0x21CF80u;
    // 0x21cf80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21cf80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_21cf84:
    // 0x21cf84: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x21cf84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21cf88: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x21CF88u;
    {
        const bool branch_taken_0x21cf88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF88u;
        // 0x21cf8c: 0x131840  sll         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf88) {
            ctx->pc = 0x21CEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cee8;
        }
    }
    ctx->pc = 0x21CF90u;
    // 0x21cf90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21cf90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cf94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21cf94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21cf98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21cf98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cf9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21cf9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21cfa0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21cfa0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cfa4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x21cfa4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21cfa8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x21cfa8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21cfac: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x21cfacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21cfb0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x21cfb0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21cfb4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x21cfb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21cfb8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x21cfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21cfbc: 0x3e00008  jr          $ra
    ctx->pc = 0x21CFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CFBCu;
        // 0x21cfc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CFC4u;
    // 0x21cfc4: 0x0  nop
    ctx->pc = 0x21cfc4u;
    // NOP
    ctx->pc = 0x21cfc8u;
}
