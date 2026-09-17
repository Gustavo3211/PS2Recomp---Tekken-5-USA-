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

// Function: sub_0020DD60
// Address: 0x20dd60 - 0x20ded8
void sub_0020DD60_0x20dd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DD60_0x20dd60");
#endif

    switch (ctx->pc) {
        case 0x20ddb8u: goto label_20ddb8;
        case 0x20de08u: goto label_20de08;
        case 0x20de58u: goto label_20de58;
        case 0x20de64u: goto label_20de64;
        case 0x20de70u: goto label_20de70;
        default: break;
    }

    ctx->pc = 0x20dd60u;

    // 0x20dd60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20dd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20dd64: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x20dd64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dd68: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x20dd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x20dd6c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x20dd6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dd70: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x20dd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x20dd74: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x20dd74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dd78: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x20dd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x20dd7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20dd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20dd80: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x20dd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x20dd84: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20dd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20dd88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20dd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20dd8c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x20dd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x20dd90: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x20dd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x20dd94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20dd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x20dd98: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x20dd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x20dd9c: 0x8ce200c4  lw          $v0, 0xC4($a3)
    ctx->pc = 0x20dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x20dda0: 0x90430040  lbu         $v1, 0x40($v0)
    ctx->pc = 0x20dda0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x20dda4: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20DDA4u;
    {
        const bool branch_taken_0x20dda4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x20DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDA4u;
        // 0x20dda8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dda4) {
            ctx->pc = 0x20DDC0u;
            goto label_20ddc0;
        }
    }
    ctx->pc = 0x20DDACu;
    // 0x20ddac: 0x84e50012  lh          $a1, 0x12($a3)
    ctx->pc = 0x20ddacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x20ddb0: 0xc08f600  jal         func_23D800
    ctx->pc = 0x20DDB0u;
    SET_GPR_U32(ctx, 31, 0x20DDB8u);
    ctx->pc = 0x20DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DDB0u;
    // 0x20ddb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D800u, 0x20DDB0u, 0x20DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DDB8u;
label_20ddb8:
    // 0x20ddb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20DDB8u;
    {
        const bool branch_taken_0x20ddb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDB8u;
        // 0x20ddbc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ddb8) {
            ctx->pc = 0x20DDDCu;
            goto label_20dddc;
        }
    }
    ctx->pc = 0x20DDC0u;
label_20ddc0:
    // 0x20ddc0: 0x90e20201  lbu         $v0, 0x201($a3)
    ctx->pc = 0x20ddc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 513)));
    // 0x20ddc4: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x20ddc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x20ddc8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DDC8u;
    {
        const bool branch_taken_0x20ddc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDC8u;
        // 0x20ddcc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ddc8) {
            ctx->pc = 0x20DDD8u;
            goto label_20ddd8;
        }
    }
    ctx->pc = 0x20DDD0u;
    // 0x20ddd0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20ddd4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x20ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_20ddd8:
    // 0x20ddd8: 0x24f10318  addiu       $s1, $a3, 0x318
    ctx->pc = 0x20ddd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 792));
label_20dddc:
    // 0x20dddc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dde0: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x20DDE0u;
    {
        const bool branch_taken_0x20dde0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDE0u;
        // 0x20dde4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dde0) {
            ctx->pc = 0x20DEA8u;
            goto label_20dea8;
        }
    }
    ctx->pc = 0x20DDE8u;
    // 0x20dde8: 0x86a202a2  lh          $v0, 0x2A2($s5)
    ctx->pc = 0x20dde8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 674)));
    // 0x20ddec: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x20DDECu;
    {
        const bool branch_taken_0x20ddec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDECu;
        // 0x20ddf0: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ddec) {
            ctx->pc = 0x20DEACu;
            goto label_20deac;
        }
    }
    ctx->pc = 0x20DDF4u;
    // 0x20ddf4: 0x26b00378  addiu       $s0, $s5, 0x378
    ctx->pc = 0x20ddf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 888));
    // 0x20ddf8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20ddf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ddfc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x20DDFCu;
    {
        const bool branch_taken_0x20ddfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDFCu;
        // 0x20de00: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ddfc) {
            ctx->pc = 0x20DE70u;
            goto label_20de70;
        }
    }
    ctx->pc = 0x20DE04u;
    // 0x20de04: 0x0  nop
    ctx->pc = 0x20de04u;
    // NOP
label_20de08:
    // 0x20de08: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x20de08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20de0c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x20de0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20de10: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x20de10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x20de14: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x20de14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20de18: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x20de18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x20de1c: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x20de1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20de20: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x20de20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x20de24: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x20de24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20de28: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x20de28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20de2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20de2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20de30: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x20de30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x20de34: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x20de34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20de38: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x20de38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20de3c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20de3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20de40: 0xe6610014  swc1        $f1, 0x14($s3)
    ctx->pc = 0x20de40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x20de44: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x20de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20de48: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x20de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20de4c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x20de4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x20de50: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x20DE50u;
    {
        const bool branch_taken_0x20de50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE50u;
        // 0x20de54: 0xe6600018  swc1        $f0, 0x18($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de50) {
            ctx->pc = 0x20DEA8u;
            goto label_20dea8;
        }
    }
    ctx->pc = 0x20DE58u;
label_20de58:
    // 0x20de58: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x20de58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x20de5c: 0xc083692  jal         func_20DA48
    ctx->pc = 0x20DE5Cu;
    SET_GPR_U32(ctx, 31, 0x20DE64u);
    ctx->pc = 0x20DE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DE5Cu;
    // 0x20de60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DA48u, 0x20DE5Cu, 0x20DE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DE64u;
label_20de64:
    // 0x20de64: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x20DE64u;
    {
        const bool branch_taken_0x20de64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20de64) {
            ctx->pc = 0x20DE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DE64u;
            // 0x20de68: 0xa6720028  sh          $s2, 0x28($s3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20de08;
        }
    }
    ctx->pc = 0x20DE6Cu;
    // 0x20de6c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20de6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20de70:
    // 0x20de70: 0x2a42000e  slti        $v0, $s2, 0xE
    ctx->pc = 0x20de70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x20de74: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20DE74u;
    {
        const bool branch_taken_0x20de74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE74u;
        // 0x20de78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de74) {
            ctx->pc = 0x20DE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20de58;
        }
    }
    ctx->pc = 0x20DE7Cu;
    // 0x20de7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20de80: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x20de80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x20de84: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x20de84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20de88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20DE88u;
    {
        const bool branch_taken_0x20de88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE88u;
        // 0x20de8c: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de88) {
            ctx->pc = 0x20DEA8u;
            goto label_20dea8;
        }
    }
    ctx->pc = 0x20DE90u;
    // 0x20de90: 0x86a202a2  lh          $v0, 0x2A2($s5)
    ctx->pc = 0x20de90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 674)));
    // 0x20de94: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20DE94u;
    {
        const bool branch_taken_0x20de94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE94u;
        // 0x20de98: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de94) {
            ctx->pc = 0x20DEACu;
            goto label_20deac;
        }
    }
    ctx->pc = 0x20DE9Cu;
    // 0x20de9c: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x20de9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dea0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x20DEA0u;
    {
        const bool branch_taken_0x20dea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DEA0u;
        // 0x20dea4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dea0) {
            ctx->pc = 0x20DE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20de70;
        }
    }
    ctx->pc = 0x20DEA8u;
label_20dea8:
    // 0x20dea8: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x20dea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_20deac:
    // 0x20deac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20deacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20deb0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20deb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20deb4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20deb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20deb8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20deb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20debc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20debcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20dec0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20dec0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dec4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x20dec4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20dec8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x20dec8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20decc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20deccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20ded0: 0x3e00008  jr          $ra
    ctx->pc = 0x20DED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DED0u;
        // 0x20ded4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DED8u;
}
