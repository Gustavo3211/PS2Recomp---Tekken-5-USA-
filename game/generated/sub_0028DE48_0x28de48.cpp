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

// Function: sub_0028DE48
// Address: 0x28de48 - 0x28e1a0
void sub_0028DE48_0x28de48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DE48_0x28de48");
#endif

    switch (ctx->pc) {
        case 0x28de80u: goto label_28de80;
        case 0x28de8cu: goto label_28de8c;
        case 0x28dee0u: goto label_28dee0;
        case 0x28df8cu: goto label_28df8c;
        case 0x28dfb4u: goto label_28dfb4;
        case 0x28dff0u: goto label_28dff0;
        case 0x28e00cu: goto label_28e00c;
        case 0x28e020u: goto label_28e020;
        case 0x28e060u: goto label_28e060;
        case 0x28e07cu: goto label_28e07c;
        case 0x28e098u: goto label_28e098;
        case 0x28e0bcu: goto label_28e0bc;
        case 0x28e0e8u: goto label_28e0e8;
        case 0x28e108u: goto label_28e108;
        case 0x28e13cu: goto label_28e13c;
        case 0x28e154u: goto label_28e154;
        default: break;
    }

    ctx->pc = 0x28de48u;

    // 0x28de48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28de48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28de4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28de4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28de50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28de50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de54: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x28de54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28de58: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x28de58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x28de5c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x28de5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x28de60: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x28de60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x28de64: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x28de64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x28de68: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x28de68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x28de6c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x28de6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x28de70: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x28de70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x28de74: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x28de74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x28de78: 0xc0b2328  jal         func_2C8CA0
    ctx->pc = 0x28DE78u;
    SET_GPR_U32(ctx, 31, 0x28DE80u);
    ctx->pc = 0x28DE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DE78u;
    // 0x28de7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8CA0u, 0x28DE78u, 0x28DE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE80u;
label_28de80:
    // 0x28de80: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x28de80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x28de84: 0xc0b2328  jal         func_2C8CA0
    ctx->pc = 0x28DE84u;
    SET_GPR_U32(ctx, 31, 0x28DE8Cu);
    ctx->pc = 0x28DE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DE84u;
    // 0x28de88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8CA0u, 0x28DE84u, 0x28DE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE8Cu;
label_28de8c:
    // 0x28de8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28de8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de90: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x28de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28de94: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DE94u;
    {
        const bool branch_taken_0x28de94 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE94u;
        // 0x28de98: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de94) {
            ctx->pc = 0x28DEA4u;
            goto label_28dea4;
        }
    }
    ctx->pc = 0x28DE9Cu;
    // 0x28de9c: 0x1860008c  blez        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x28DE9Cu;
    {
        const bool branch_taken_0x28de9c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x28DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE9Cu;
        // 0x28dea0: 0x2642000c  addiu       $v0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de9c) {
            ctx->pc = 0x28E0D0u;
            goto label_28e0d0;
        }
    }
    ctx->pc = 0x28DEA4u;
label_28dea4:
    // 0x28dea4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x28dea8: 0x24426f88  addiu       $v0, $v0, 0x6F88
    ctx->pc = 0x28dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28552));
    // 0x28deac: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28deacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x176F94u));
    // 0x28deb0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DEB0u;
    {
        const bool branch_taken_0x28deb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28deb0) {
            ctx->pc = 0x28DEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DEB0u;
            // 0x28deb4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DEC8u;
            goto label_28dec8;
        }
    }
    ctx->pc = 0x28DEB8u;
    // 0x28deb8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x28deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28debc: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x28DEBCu;
    {
        const bool branch_taken_0x28debc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DEBCu;
        // 0x28dec0: 0x2642000c  addiu       $v0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28debc) {
            ctx->pc = 0x28E0D0u;
            goto label_28e0d0;
        }
    }
    ctx->pc = 0x28DEC4u;
    // 0x28dec4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_28dec8:
    // 0x28dec8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x28dec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x28decc: 0x8c438868  lw          $v1, -0x7798($v0)
    ctx->pc = 0x28deccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936680)));
    // 0x28ded0: 0x5064007f  beql        $v1, $a0, . + 4 + (0x7F << 2)
    ctx->pc = 0x28DED0u;
    {
        const bool branch_taken_0x28ded0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x28ded0) {
            ctx->pc = 0x28DED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DED0u;
            // 0x28ded4: 0x2642000c  addiu       $v0, $s2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E0D0u;
            goto label_28e0d0;
        }
    }
    ctx->pc = 0x28DED8u;
    // 0x28ded8: 0xc0a39d2  jal         func_28E748
    ctx->pc = 0x28DED8u;
    SET_GPR_U32(ctx, 31, 0x28DEE0u);
    ctx->pc = 0x28E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E748u, 0x28DED8u, 0x28DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DEE0u;
label_28dee0:
    // 0x28dee0: 0x1440007b  bnez        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x28DEE0u;
    {
        const bool branch_taken_0x28dee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DEE0u;
        // 0x28dee4: 0x2642000c  addiu       $v0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dee0) {
            ctx->pc = 0x28E0D0u;
            goto label_28e0d0;
        }
    }
    ctx->pc = 0x28DEE8u;
    // 0x28dee8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x28dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28deec: 0x286203e8  slti        $v0, $v1, 0x3E8
    ctx->pc = 0x28deecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x28def0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DEF0u;
    {
        const bool branch_taken_0x28def0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28def0) {
            ctx->pc = 0x28DEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DEF0u;
            // 0x28def4: 0x28620064  slti        $v0, $v1, 0x64 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DF08u;
            goto label_28df08;
        }
    }
    ctx->pc = 0x28DEF8u;
    // 0x28def8: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x28def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x28defc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28DEFCu;
    {
        const bool branch_taken_0x28defc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DEFCu;
        // 0x28df00: 0x2403ffd3  addiu       $v1, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28defc) {
            ctx->pc = 0x28DF24u;
            goto label_28df24;
        }
    }
    ctx->pc = 0x28DF04u;
    // 0x28df04: 0x0  nop
    ctx->pc = 0x28df04u;
    // NOP
label_28df08:
    // 0x28df08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DF08u;
    {
        const bool branch_taken_0x28df08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28df08) {
            ctx->pc = 0x28DF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DF08u;
            // 0x28df0c: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DF20u;
            goto label_28df20;
        }
    }
    ctx->pc = 0x28DF10u;
    // 0x28df10: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x28df10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x28df14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28DF14u;
    {
        const bool branch_taken_0x28df14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF14u;
        // 0x28df18: 0x2403ffdd  addiu       $v1, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df14) {
            ctx->pc = 0x28DF24u;
            goto label_28df24;
        }
    }
    ctx->pc = 0x28DF1Cu;
    // 0x28df1c: 0x0  nop
    ctx->pc = 0x28df1cu;
    // NOP
label_28df20:
    // 0x28df20: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x28df20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_28df24:
    // 0x28df24: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x28df24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x28df28: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x28df28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x28df2c: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x28df2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x28df30: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x28df30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x28df34: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x28df34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28df38: 0x286203e8  slti        $v0, $v1, 0x3E8
    ctx->pc = 0x28df38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x28df3c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DF3Cu;
    {
        const bool branch_taken_0x28df3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28df3c) {
            ctx->pc = 0x28DF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DF3Cu;
            // 0x28df40: 0x28620064  slti        $v0, $v1, 0x64 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DF50u;
            goto label_28df50;
        }
    }
    ctx->pc = 0x28DF44u;
    // 0x28df44: 0x24020195  addiu       $v0, $zero, 0x195
    ctx->pc = 0x28df44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
    // 0x28df48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28DF48u;
    {
        const bool branch_taken_0x28df48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF48u;
        // 0x28df4c: 0x2403ffd3  addiu       $v1, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df48) {
            ctx->pc = 0x28DF70u;
            goto label_28df70;
        }
    }
    ctx->pc = 0x28DF50u;
label_28df50:
    // 0x28df50: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DF50u;
    {
        const bool branch_taken_0x28df50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28df50) {
            ctx->pc = 0x28DF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DF50u;
            // 0x28df54: 0x240201ad  addiu       $v0, $zero, 0x1AD (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 429));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DF68u;
            goto label_28df68;
        }
    }
    ctx->pc = 0x28DF58u;
    // 0x28df58: 0x240201a1  addiu       $v0, $zero, 0x1A1
    ctx->pc = 0x28df58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
    // 0x28df5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28DF5Cu;
    {
        const bool branch_taken_0x28df5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF5Cu;
        // 0x28df60: 0x2403ffdd  addiu       $v1, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df5c) {
            ctx->pc = 0x28DF6Cu;
            goto label_28df6c;
        }
    }
    ctx->pc = 0x28DF64u;
    // 0x28df64: 0x0  nop
    ctx->pc = 0x28df64u;
    // NOP
label_28df68:
    // 0x28df68: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x28df68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_28df6c:
    // 0x28df6c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x28df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_28df70:
    // 0x28df70: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x28df70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x28df74: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x28df74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x28df78: 0xae440028  sw          $a0, 0x28($s2)
    ctx->pc = 0x28df78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 4));
    // 0x28df7c: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x28df7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x28df80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28df80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df84: 0xc0a3868  jal         func_28E1A0
    ctx->pc = 0x28DF84u;
    SET_GPR_U32(ctx, 31, 0x28DF8Cu);
    ctx->pc = 0x28DF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF84u;
    // 0x28df88: 0x26706ef8  addiu       $s0, $s3, 0x6EF8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 28408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E1A0u, 0x28DF84u, 0x28DF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF8Cu;
label_28df8c:
    // 0x28df8c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x28df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x28df90: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x28DF90u;
    {
        const bool branch_taken_0x28df90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF90u;
        // 0x28df94: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df90) {
            ctx->pc = 0x28E088u;
            goto label_28e088;
        }
    }
    ctx->pc = 0x28DF98u;
    // 0x28df98: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x28DF98u;
    {
        const bool branch_taken_0x28df98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28df98) {
            ctx->pc = 0x28E088u;
            goto label_28e088;
        }
    }
    ctx->pc = 0x28DFA0u;
    // 0x28dfa0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x28dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28dfa4: 0x5840001a  blezl       $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x28DFA4u;
    {
        const bool branch_taken_0x28dfa4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x28dfa4) {
            ctx->pc = 0x28DFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DFA4u;
            // 0x28dfa8: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E010u;
            goto label_28e010;
        }
    }
    ctx->pc = 0x28DFACu;
    // 0x28dfac: 0xc0a39e6  jal         func_28E798
    ctx->pc = 0x28DFACu;
    SET_GPR_U32(ctx, 31, 0x28DFB4u);
    ctx->pc = 0x28DFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DFACu;
    // 0x28dfb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E798u, 0x28DFACu, 0x28DFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DFB4u;
label_28dfb4:
    // 0x28dfb4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x28DFB4u;
    {
        const bool branch_taken_0x28dfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dfb4) {
            ctx->pc = 0x28DFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DFB4u;
            // 0x28dfb8: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E010u;
            goto label_28e010;
        }
    }
    ctx->pc = 0x28DFBCu;
    // 0x28dfbc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28dfc0: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x28dfc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x28dfc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28dfc8: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x28dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28dfcc: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x28dfccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x28dfd0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x28dfd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dfd4: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x28dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x28dfd8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28dfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28dfdc: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x28dfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x28dfe0: 0x8e500038  lw          $s0, 0x38($s2)
    ctx->pc = 0x28dfe0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x28dfe4: 0x8c710060  lw          $s1, 0x60($v1)
    ctx->pc = 0x28dfe4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x28dfe8: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28DFE8u;
    SET_GPR_U32(ctx, 31, 0x28DFF0u);
    ctx->pc = 0x28DFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DFE8u;
    // 0x28dfec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28DFE8u, 0x28DFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DFF0u;
label_28dff0:
    // 0x28dff0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28DFF0u;
    {
        const bool branch_taken_0x28dff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dff0) {
            ctx->pc = 0x28DFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DFF0u;
            // 0x28dff4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E010u;
            goto label_28e010;
        }
    }
    ctx->pc = 0x28DFF8u;
    // 0x28dff8: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x28dff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x28dffc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28dffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e000: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28e000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e004: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28E004u;
    SET_GPR_U32(ctx, 31, 0x28E00Cu);
    ctx->pc = 0x28E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E004u;
    // 0x28e008: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28E004u, 0x28E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E00Cu;
label_28e00c:
    // 0x28e00c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_28e010:
    // 0x28e010: 0x5840001b  blezl       $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28E010u;
    {
        const bool branch_taken_0x28e010 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x28e010) {
            ctx->pc = 0x28E014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E010u;
            // 0x28e014: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E080u;
            goto label_28e080;
        }
    }
    ctx->pc = 0x28E018u;
    // 0x28e018: 0xc0a39e6  jal         func_28E798
    ctx->pc = 0x28E018u;
    SET_GPR_U32(ctx, 31, 0x28E020u);
    ctx->pc = 0x28E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E018u;
    // 0x28e01c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E798u, 0x28E018u, 0x28E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E020u;
label_28e020:
    // 0x28e020: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28E020u;
    {
        const bool branch_taken_0x28e020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E020u;
        // 0x28e024: 0x26500004  addiu       $s0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e020) {
            ctx->pc = 0x28E07Cu;
            goto label_28e07c;
        }
    }
    ctx->pc = 0x28E028u;
    // 0x28e028: 0x8e636ef8  lw          $v1, 0x6EF8($s3)
    ctx->pc = 0x28e028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28408)));
    // 0x28e02c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x28e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28e030: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x28e030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x28e034: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28e034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28e038: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28e038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28e03c: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x28e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x28e040: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28e044: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28e044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28e048: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28e048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28e04c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28e04cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28e050: 0x8e500038  lw          $s0, 0x38($s2)
    ctx->pc = 0x28e050u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x28e054: 0x8c710060  lw          $s1, 0x60($v1)
    ctx->pc = 0x28e054u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x28e058: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28E058u;
    SET_GPR_U32(ctx, 31, 0x28E060u);
    ctx->pc = 0x28E05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E058u;
    // 0x28e05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28E058u, 0x28E060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E060u;
label_28e060:
    // 0x28e060: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28E060u;
    {
        const bool branch_taken_0x28e060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e060) {
            ctx->pc = 0x28E064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E060u;
            // 0x28e064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E080u;
            goto label_28e080;
        }
    }
    ctx->pc = 0x28E068u;
    // 0x28e068: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x28e068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x28e06c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28e06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e070: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28e070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e074: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28E074u;
    SET_GPR_U32(ctx, 31, 0x28E07Cu);
    ctx->pc = 0x28E078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E074u;
    // 0x28e078: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28E074u, 0x28E07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E07Cu;
label_28e07c:
    // 0x28e07c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e080:
    // 0x28e080: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28e080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e084: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x28e084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_28e088:
    // 0x28e088: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x28E088u;
    {
        const bool branch_taken_0x28e088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E088u;
        // 0x28e08c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e088) {
            ctx->pc = 0x28E170u;
            goto label_28e170;
        }
    }
    ctx->pc = 0x28E090u;
    // 0x28e090: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x28e090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x28e094: 0x8e626ef8  lw          $v0, 0x6EF8($s3)
    ctx->pc = 0x28e094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28408)));
label_28e098:
    // 0x28e098: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x28e098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x28e09c: 0xc64c0084  lwc1        $f12, 0x84($s2)
    ctx->pc = 0x28e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e0a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28e0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e0a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e0a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28e0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28e0ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28e0b0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28e0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28e0b4: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28E0B4u;
    SET_GPR_U32(ctx, 31, 0x28E0BCu);
    ctx->pc = 0x28E0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E0B4u;
    // 0x28e0b8: 0x8c640040  lw          $a0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28E0B4u, 0x28E0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E0BCu;
label_28e0bc:
    // 0x28e0bc: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x28e0bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28e0c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x28E0C0u;
    {
        const bool branch_taken_0x28e0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E0C0u;
        // 0x28e0c4: 0x8e626ef8  lw          $v0, 0x6EF8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e0c0) {
            ctx->pc = 0x28E098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e098;
        }
    }
    ctx->pc = 0x28E0C8u;
    // 0x28e0c8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x28E0C8u;
    {
        const bool branch_taken_0x28e0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E0C8u;
        // 0x28e0cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e0c8) {
            ctx->pc = 0x28E174u;
            goto label_28e174;
        }
    }
    ctx->pc = 0x28E0D0u;
label_28e0d0:
    // 0x28e0d0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28e0d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e0d4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x28e0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x28e0d8: 0x2417efff  addiu       $s7, $zero, -0x1001
    ctx->pc = 0x28e0d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28e0dc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x28e0dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e0e0: 0x26550004  addiu       $s5, $s2, 0x4
    ctx->pc = 0x28e0e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x28e0e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x28e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28e0e8:
    // 0x28e0e8: 0x16a080  sll         $s4, $s6, 2
    ctx->pc = 0x28e0e8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x28e0ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28e0ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e0f0: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x28e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x28e0f4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x28e0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x28e0f8: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x28e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28e0fc: 0x771824  and         $v1, $v1, $s7
    ctx->pc = 0x28e0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x28e100: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x28e100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
    // 0x28e104: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x28e104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_28e108:
    // 0x28e108: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28e108u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28e10c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28e110: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x28e110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x28e114: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x28e114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x28e118: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28e118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e11c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28e120: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x28e120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x28e124: 0x13c0000b  beqz        $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x28E124u;
    {
        const bool branch_taken_0x28e124 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E124u;
        // 0x28e128: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e124) {
            ctx->pc = 0x28E154u;
            goto label_28e154;
        }
    }
    ctx->pc = 0x28E12Cu;
    // 0x28e12c: 0x8e510038  lw          $s1, 0x38($s2)
    ctx->pc = 0x28e12cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x28e130: 0x8cb00060  lw          $s0, 0x60($a1)
    ctx->pc = 0x28e130u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x28e134: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28E134u;
    SET_GPR_U32(ctx, 31, 0x28E13Cu);
    ctx->pc = 0x28E138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E134u;
    // 0x28e138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28E134u, 0x28E13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E13Cu;
label_28e13c:
    // 0x28e13c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e140: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28e140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e144: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E144u;
    {
        const bool branch_taken_0x28e144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E144u;
        // 0x28e148: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e144) {
            ctx->pc = 0x28E154u;
            goto label_28e154;
        }
    }
    ctx->pc = 0x28E14Cu;
    // 0x28e14c: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28E14Cu;
    SET_GPR_U32(ctx, 31, 0x28E154u);
    ctx->pc = 0x28E150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E14Cu;
    // 0x28e150: 0x8e240130  lw          $a0, 0x130($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28E14Cu, 0x28E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E154u;
label_28e154:
    // 0x28e154: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x28e154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28e158: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x28E158u;
    {
        const bool branch_taken_0x28e158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E158u;
        // 0x28e15c: 0x2931021  addu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e158) {
            ctx->pc = 0x28E108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e108;
        }
    }
    ctx->pc = 0x28E160u;
    // 0x28e160: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x28e160u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x28e164: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x28e164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28e168: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x28E168u;
    {
        const bool branch_taken_0x28e168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E168u;
        // 0x28e16c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e168) {
            ctx->pc = 0x28E0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e0e8;
        }
    }
    ctx->pc = 0x28E170u;
label_28e170:
    // 0x28e170: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28e170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28e174:
    // 0x28e174: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x28e174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28e178: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28e178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e17c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x28e17cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28e180: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x28e180u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e184: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x28e184u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28e188: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x28e188u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e18c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x28e18cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28e190: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x28e190u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e194: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x28e194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28e198: 0x3e00008  jr          $ra
    ctx->pc = 0x28E198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E198u;
        // 0x28e19c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E1A0u;
}
