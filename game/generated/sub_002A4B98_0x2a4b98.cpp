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

// Function: sub_002A4B98
// Address: 0x2a4b98 - 0x2a50b8
void sub_002A4B98_0x2a4b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4B98_0x2a4b98");
#endif

    switch (ctx->pc) {
        case 0x2a4c18u: goto label_2a4c18;
        case 0x2a4c28u: goto label_2a4c28;
        case 0x2a4c44u: goto label_2a4c44;
        case 0x2a4c54u: goto label_2a4c54;
        case 0x2a4c60u: goto label_2a4c60;
        case 0x2a4c80u: goto label_2a4c80;
        case 0x2a4c90u: goto label_2a4c90;
        case 0x2a4cc8u: goto label_2a4cc8;
        case 0x2a4d08u: goto label_2a4d08;
        case 0x2a4d14u: goto label_2a4d14;
        case 0x2a4d50u: goto label_2a4d50;
        case 0x2a4d70u: goto label_2a4d70;
        case 0x2a4dd0u: goto label_2a4dd0;
        case 0x2a4de0u: goto label_2a4de0;
        case 0x2a4e10u: goto label_2a4e10;
        case 0x2a4e28u: goto label_2a4e28;
        case 0x2a4eb8u: goto label_2a4eb8;
        case 0x2a4ec0u: goto label_2a4ec0;
        case 0x2a4ed0u: goto label_2a4ed0;
        case 0x2a4ef0u: goto label_2a4ef0;
        case 0x2a4f20u: goto label_2a4f20;
        case 0x2a4f40u: goto label_2a4f40;
        case 0x2a4f98u: goto label_2a4f98;
        case 0x2a5000u: goto label_2a5000;
        case 0x2a5050u: goto label_2a5050;
        case 0x2a5058u: goto label_2a5058;
        case 0x2a5070u: goto label_2a5070;
        case 0x2a5080u: goto label_2a5080;
        default: break;
    }

    ctx->pc = 0x2a4b98u;

    // 0x2a4b98: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a4b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a4b9c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2a4b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2a4ba0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a4ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ba4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2a4ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2a4ba8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2a4ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2a4bac: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2a4bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2a4bb0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2a4bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2a4bb4: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x2a4bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x2a4bb8: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2a4bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2a4bbc: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x2a4bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x2a4bc0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2a4bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2a4bc4: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x2a4bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x2a4bc8: 0x8e250154  lw          $a1, 0x154($s1)
    ctx->pc = 0x2a4bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x2a4bcc: 0x28a20021  slti        $v0, $a1, 0x21
    ctx->pc = 0x2a4bccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2a4bd0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4BD0u;
    {
        const bool branch_taken_0x2a4bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4bd0) {
            ctx->pc = 0x2A4BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4BD0u;
            // 0x2a4bd4: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4BE8u;
            goto label_2a4be8;
        }
    }
    ctx->pc = 0x2A4BD8u;
    // 0x2a4bd8: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x2a4bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2a4bdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4BDCu;
    {
        const bool branch_taken_0x2a4bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4BDCu;
        // 0x2a4be0: 0x24b7ffdf  addiu       $s7, $a1, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4bdc) {
            ctx->pc = 0x2A4BECu;
            goto label_2a4bec;
        }
    }
    ctx->pc = 0x2A4BE4u;
    // 0x2a4be4: 0x0  nop
    ctx->pc = 0x2a4be4u;
    // NOP
label_2a4be8:
    // 0x2a4be8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2a4be8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a4bec:
    // 0x2a4bec: 0xae220150  sw          $v0, 0x150($s1)
    ctx->pc = 0x2a4becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
    // 0x2a4bf0: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2a4bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2a4bf4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2a4bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4bf8: 0x10720023  beq         $v1, $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A4BF8u;
    {
        const bool branch_taken_0x2a4bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2A4BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4BF8u;
        // 0x2a4bfc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4bf8) {
            ctx->pc = 0x2A4C88u;
            goto label_2a4c88;
        }
    }
    ctx->pc = 0x2A4C00u;
    // 0x2a4c00: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2A4C00u;
    {
        const bool branch_taken_0x2a4c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C00u;
        // 0x2a4c04: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4c00) {
            ctx->pc = 0x2A4DF8u;
            goto label_2a4df8;
        }
    }
    ctx->pc = 0x2A4C08u;
    // 0x2a4c08: 0x1460007c  bnez        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x2A4C08u;
    {
        const bool branch_taken_0x2a4c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C08u;
        // 0x2a4c0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4c08) {
            ctx->pc = 0x2A4DFCu;
            goto label_2a4dfc;
        }
    }
    ctx->pc = 0x2A4C10u;
    // 0x2a4c10: 0xc089622  jal         func_225888
    ctx->pc = 0x2A4C10u;
    SET_GPR_U32(ctx, 31, 0x2A4C18u);
    ctx->pc = 0x2A4C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4C10u;
    // 0x2a4c14: 0x8e240150  lw          $a0, 0x150($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x2A4C10u, 0x2A4C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C18u;
label_2a4c18:
    // 0x2a4c18: 0x5040011a  beql        $v0, $zero, . + 4 + (0x11A << 2)
    ctx->pc = 0x2A4C18u;
    {
        const bool branch_taken_0x2a4c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4c18) {
            ctx->pc = 0x2A4C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4C18u;
            // 0x2a4c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5084u;
            goto label_2a5084;
        }
    }
    ctx->pc = 0x2A4C20u;
    // 0x2a4c20: 0xc089622  jal         func_225888
    ctx->pc = 0x2A4C20u;
    SET_GPR_U32(ctx, 31, 0x2A4C28u);
    ctx->pc = 0x2A4C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4C20u;
    // 0x2a4c24: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x2A4C20u, 0x2A4C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C28u;
label_2a4c28:
    // 0x2a4c28: 0x10400115  beqz        $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x2A4C28u;
    {
        const bool branch_taken_0x2a4c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C28u;
        // 0x2a4c2c: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4c28) {
            ctx->pc = 0x2A5080u;
            goto label_2a5080;
        }
    }
    ctx->pc = 0x2A4C30u;
    // 0x2a4c30: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2a4c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2a4c34: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4C34u;
    {
        const bool branch_taken_0x2a4c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a4c34) {
            ctx->pc = 0x2A4C4Cu;
            goto label_2a4c4c;
        }
    }
    ctx->pc = 0x2A4C3Cu;
    // 0x2a4c3c: 0xc089622  jal         func_225888
    ctx->pc = 0x2A4C3Cu;
    SET_GPR_U32(ctx, 31, 0x2A4C44u);
    ctx->pc = 0x2A4C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4C3Cu;
    // 0x2a4c40: 0x24040043  addiu       $a0, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x2A4C3Cu, 0x2A4C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C44u;
label_2a4c44:
    // 0x2a4c44: 0x1040010f  beqz        $v0, . + 4 + (0x10F << 2)
    ctx->pc = 0x2A4C44u;
    {
        const bool branch_taken_0x2a4c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C44u;
        // 0x2a4c48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4c44) {
            ctx->pc = 0x2A5084u;
            goto label_2a5084;
        }
    }
    ctx->pc = 0x2A4C4Cu;
label_2a4c4c:
    // 0x2a4c4c: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2A4C4Cu;
    SET_GPR_U32(ctx, 31, 0x2A4C54u);
    ctx->pc = 0x2A4C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4C4Cu;
    // 0x2a4c50: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2A4C4Cu, 0x2A4C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C54u;
label_2a4c54:
    // 0x2a4c54: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x2a4c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2a4c58: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2A4C58u;
    SET_GPR_U32(ctx, 31, 0x2A4C60u);
    ctx->pc = 0x2A4C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4C58u;
    // 0x2a4c5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2A4C58u, 0x2A4C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C60u;
label_2a4c60:
    // 0x2a4c60: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x2a4c60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x2a4c64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a4c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a4c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c70: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2a4c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2a4c74: 0x240800f2  addiu       $t0, $zero, 0xF2
    ctx->pc = 0x2a4c74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x2a4c78: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x2A4C78u;
    SET_GPR_U32(ctx, 31, 0x2A4C80u);
    ctx->pc = 0x2A4C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4C78u;
    // 0x2a4c7c: 0x35290800  ori         $t1, $t1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x2A4C78u, 0x2A4C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C80u;
label_2a4c80:
    // 0x2a4c80: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x2A4C80u;
    {
        const bool branch_taken_0x2a4c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C80u;
        // 0x2a4c84: 0xae320048  sw          $s2, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4c80) {
            ctx->pc = 0x2A5080u;
            goto label_2a5080;
        }
    }
    ctx->pc = 0x2A4C88u;
label_2a4c88:
    // 0x2a4c88: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x2A4C88u;
    SET_GPR_U32(ctx, 31, 0x2A4C90u);
    ctx->pc = 0x2A4C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4C88u;
    // 0x2a4c8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x2A4C88u, 0x2A4C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C90u;
label_2a4c90:
    // 0x2a4c90: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x2a4c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x2a4c94: 0x104000fa  beqz        $v0, . + 4 + (0xFA << 2)
    ctx->pc = 0x2A4C94u;
    {
        const bool branch_taken_0x2a4c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C94u;
        // 0x2a4c98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4c94) {
            ctx->pc = 0x2A5080u;
            goto label_2a5080;
        }
    }
    ctx->pc = 0x2A4C9Cu;
    // 0x2a4c9c: 0xae200160  sw          $zero, 0x160($s1)
    ctx->pc = 0x2a4c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
    // 0x2a4ca0: 0xae20015c  sw          $zero, 0x15C($s1)
    ctx->pc = 0x2a4ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 0));
    // 0x2a4ca4: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2a4ca4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a4ca8: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x2a4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x2a4cac: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x2a4cacu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
    // 0x2a4cb0: 0x2634000c  addiu       $s4, $s1, 0xC
    ctx->pc = 0x2a4cb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2a4cb4: 0x2415efff  addiu       $s5, $zero, -0x1001
    ctx->pc = 0x2a4cb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a4cb8: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x2a4cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2a4cbc: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2a4cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2a4cc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4CC0u;
    {
        const bool branch_taken_0x2a4cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CC0u;
        // 0x2a4cc4: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4cc0) {
            ctx->pc = 0x2A4CE4u;
            goto label_2a4ce4;
        }
    }
    ctx->pc = 0x2A4CC8u;
label_2a4cc8:
    // 0x2a4cc8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2a4cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a4ccc: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4CCCu;
    {
        const bool branch_taken_0x2a4ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4ccc) {
            ctx->pc = 0x2A4CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4CCCu;
            // 0x2a4cd0: 0x8e220158  lw          $v0, 0x158($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4CE8u;
            goto label_2a4ce8;
        }
    }
    ctx->pc = 0x2A4CD4u;
    // 0x2a4cd4: 0xac430160  sw          $v1, 0x160($v0)
    ctx->pc = 0x2a4cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 3));
    // 0x2a4cd8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a4cdc: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x2a4cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x2a4ce0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a4ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2a4ce4:
    // 0x2a4ce4: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x2a4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
label_2a4ce8:
    // 0x2a4ce8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2a4ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a4cec: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2A4CECu;
    {
        const bool branch_taken_0x2a4cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4cec) {
            ctx->pc = 0x2A4CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4CECu;
            // 0x2a4cf0: 0xae200164  sw          $zero, 0x164($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4D2Cu;
            goto label_2a4d2c;
        }
    }
    ctx->pc = 0x2A4CF4u;
    // 0x2a4cf4: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x2a4cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a4cf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a4cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4cfc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a4cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d00: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2A4D00u;
    SET_GPR_U32(ctx, 31, 0x2A4D08u);
    ctx->pc = 0x2A4D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4D00u;
    // 0x2a4d04: 0x26c5da40  addiu       $a1, $s6, -0x25C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2A4D00u, 0x2A4D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D08u;
label_2a4d08:
    // 0x2a4d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d0c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2A4D0Cu;
    SET_GPR_U32(ctx, 31, 0x2A4D14u);
    ctx->pc = 0x2A4D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4D0Cu;
    // 0x2a4d10: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2A4D0Cu, 0x2A4D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D14u;
label_2a4d14:
    // 0x2a4d14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a4d14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d18: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2a4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2a4d1c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2a4d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2a4d20: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2A4D20u;
    {
        const bool branch_taken_0x2a4d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D20u;
        // 0x2a4d24: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d20) {
            ctx->pc = 0x2A4CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4cc8;
        }
    }
    ctx->pc = 0x2A4D28u;
    // 0x2a4d28: 0xae200164  sw          $zero, 0x164($s1)
    ctx->pc = 0x2a4d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 0));
label_2a4d2c:
    // 0x2a4d2c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2a4d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2a4d30: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2a4d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2a4d34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a4d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4d38: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x2a4d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x2a4d3c: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x2a4d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2a4d40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a4d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a4d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d48: 0xc0a5ec2  jal         func_297B08
    ctx->pc = 0x2A4D48u;
    SET_GPR_U32(ctx, 31, 0x2A4D50u);
    ctx->pc = 0x2A4D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4D48u;
    // 0x2a4d4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B08u, 0x2A4D48u, 0x2A4D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D50u;
label_2a4d50:
    // 0x2a4d50: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x2a4d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x2a4d54: 0x58800018  blezl       $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A4D54u;
    {
        const bool branch_taken_0x2a4d54 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2a4d54) {
            ctx->pc = 0x2A4D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4D54u;
            // 0x2a4d58: 0x8e230150  lw          $v1, 0x150($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4DB8u;
            goto label_2a4db8;
        }
    }
    ctx->pc = 0x2A4D5Cu;
    // 0x2a4d5c: 0x2627000c  addiu       $a3, $s1, 0xC
    ctx->pc = 0x2a4d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2a4d60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a4d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d64: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2a4d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d68: 0x2408efff  addiu       $t0, $zero, -0x1001
    ctx->pc = 0x2a4d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a4d6c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2a4d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2a4d70:
    // 0x2a4d70: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2a4d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a4d74: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x2a4d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2a4d78: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4D78u;
    {
        const bool branch_taken_0x2a4d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D78u;
        // 0x2a4d7c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d78) {
            ctx->pc = 0x2A4D90u;
            goto label_2a4d90;
        }
    }
    ctx->pc = 0x2A4D80u;
    // 0x2a4d80: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a4d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a4d84: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2a4d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2a4d88: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a4d88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a4d8c: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x2a4d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
label_2a4d90:
    // 0x2a4d90: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2a4d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a4d94: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A4D94u;
    {
        const bool branch_taken_0x2a4d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D94u;
        // 0x2a4d98: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d94) {
            ctx->pc = 0x2A4D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4d70;
        }
    }
    ctx->pc = 0x2A4D9Cu;
    // 0x2a4d9c: 0x8ce30160  lw          $v1, 0x160($a3)
    ctx->pc = 0x2a4d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x2a4da0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4DA0u;
    {
        const bool branch_taken_0x2a4da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4da0) {
            ctx->pc = 0x2A4DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4DA0u;
            // 0x2a4da4: 0x8e230150  lw          $v1, 0x150($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4DB8u;
            goto label_2a4db8;
        }
    }
    ctx->pc = 0x2A4DA8u;
    // 0x2a4da8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a4da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a4dac: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a4dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a4db0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a4db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a4db4: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2a4db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_2a4db8:
    // 0x2a4db8: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x2a4db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2a4dbc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4DBCu;
    {
        const bool branch_taken_0x2a4dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A4DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4DBCu;
        // 0x2a4dc0: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4dbc) {
            ctx->pc = 0x2A4DD8u;
            goto label_2a4dd8;
        }
    }
    ctx->pc = 0x2A4DC4u;
    // 0x2a4dc4: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x2a4dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2a4dc8: 0xc092460  jal         func_249180
    ctx->pc = 0x2A4DC8u;
    SET_GPR_U32(ctx, 31, 0x2A4DD0u);
    ctx->pc = 0x2A4DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4DC8u;
    // 0x2a4dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249180u, 0x2A4DC8u, 0x2A4DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4DD0u;
label_2a4dd0:
    // 0x2a4dd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4DD0u;
    {
        const bool branch_taken_0x2a4dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4DD0u;
        // 0x2a4dd4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4dd0) {
            ctx->pc = 0x2A4DE4u;
            goto label_2a4de4;
        }
    }
    ctx->pc = 0x2A4DD8u;
label_2a4dd8:
    // 0x2a4dd8: 0xc092460  jal         func_249180
    ctx->pc = 0x2A4DD8u;
    SET_GPR_U32(ctx, 31, 0x2A4DE0u);
    ctx->pc = 0x2A4DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4DD8u;
    // 0x2a4ddc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249180u, 0x2A4DD8u, 0x2A4DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4DE0u;
label_2a4de0:
    // 0x2a4de0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a4de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a4de4:
    // 0x2a4de4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a4de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4de8: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x2a4de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x2a4dec: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2A4DECu;
    {
        const bool branch_taken_0x2a4dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4DECu;
        // 0x2a4df0: 0xae230168  sw          $v1, 0x168($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4dec) {
            ctx->pc = 0x2A5080u;
            goto label_2a5080;
        }
    }
    ctx->pc = 0x2A4DF4u;
    // 0x2a4df4: 0x0  nop
    ctx->pc = 0x2a4df4u;
    // NOP
label_2a4df8:
    // 0x2a4df8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a4df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a4dfc:
    // 0x2a4dfc: 0x2484da50  addiu       $a0, $a0, -0x25B0
    ctx->pc = 0x2a4dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957648));
    // 0x2a4e00: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a4e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a4e04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a4e04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e08: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A4E08u;
    SET_GPR_U32(ctx, 31, 0x2A4E10u);
    ctx->pc = 0x2A4E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4E08u;
    // 0x2a4e0c: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A4E08u, 0x2A4E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E10u;
label_2a4e10:
    // 0x2a4e10: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a4e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a4e14: 0x3c06000d  lui         $a2, 0xD
    ctx->pc = 0x2a4e14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)13 << 16));
    // 0x2a4e18: 0x248440c8  addiu       $a0, $a0, 0x40C8
    ctx->pc = 0x2a4e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16584));
    // 0x2a4e1c: 0x3c05000d  lui         $a1, 0xD
    ctx->pc = 0x2a4e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13 << 16));
    // 0x2a4e20: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A4E20u;
    SET_GPR_U32(ctx, 31, 0x2A4E28u);
    ctx->pc = 0x2A4E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4E20u;
    // 0x2a4e24: 0x34c60001  ori         $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A4E20u, 0x2A4E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E28u;
label_2a4e28:
    // 0x2a4e28: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2a4e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2a4e2c: 0x24a48858  addiu       $a0, $a1, -0x77A8
    ctx->pc = 0x2a4e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x2a4e30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a4e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4e34: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x2a4e38: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4E38u;
    {
        const bool branch_taken_0x2a4e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a4e38) {
            ctx->pc = 0x2A4E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4E38u;
            // 0x2a4e3c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4E50u;
            goto label_2a4e50;
        }
    }
    ctx->pc = 0x2A4E40u;
    // 0x2a4e40: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x2a4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2a4e44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a4e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a4e48: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x2a4e48u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a4e4c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a4e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2a4e50:
    // 0x2a4e50: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4E50u;
    {
        const bool branch_taken_0x2a4e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a4e50) {
            ctx->pc = 0x2A4E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4E50u;
            // 0x2a4e54: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4E64u;
            goto label_2a4e64;
        }
    }
    ctx->pc = 0x2A4E58u;
    // 0x2a4e58: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x2a4e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2a4e5c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a4e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2a4e60: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x2a4e60u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a4e64:
    // 0x2a4e64: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4E64u;
    {
        const bool branch_taken_0x2a4e64 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4E64u;
        // 0x2a4e68: 0x8f82a850  lw          $v0, -0x57B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e64) {
            ctx->pc = 0x2A4E78u;
            goto label_2a4e78;
        }
    }
    ctx->pc = 0x2A4E6Cu;
    // 0x2a4e6c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x2a4e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x2a4e70: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4E70u;
    {
        const bool branch_taken_0x2a4e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4E70u;
        // 0x2a4e74: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e70) {
            ctx->pc = 0x2A4E94u;
            goto label_2a4e94;
        }
    }
    ctx->pc = 0x2A4E78u;
label_2a4e78:
    // 0x2a4e78: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4E78u;
    {
        const bool branch_taken_0x2a4e78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4E78u;
        // 0x2a4e7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e78) {
            ctx->pc = 0x2A4E94u;
            goto label_2a4e94;
        }
    }
    ctx->pc = 0x2A4E80u;
    // 0x2a4e80: 0x8f82a854  lw          $v0, -0x57AC($gp)
    ctx->pc = 0x2a4e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944852)));
    // 0x2a4e84: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x2a4e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x2a4e88: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A4E88u;
    {
        const bool branch_taken_0x2a4e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4E88u;
        // 0x2a4e8c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e88) {
            ctx->pc = 0x2A4E94u;
            goto label_2a4e94;
        }
    }
    ctx->pc = 0x2A4E90u;
    // 0x2a4e90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a4e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4e94:
    // 0x2a4e94: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2a4e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2a4e98: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x2a4e98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x2a4e9c: 0x2484da60  addiu       $a0, $a0, -0x25A0
    ctx->pc = 0x2a4e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957664));
    // 0x2a4ea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a4ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ea4: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a4ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a4ea8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2a4ea8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2a4eac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a4eacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4eb0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A4EB0u;
    SET_GPR_U32(ctx, 31, 0x2A4EB8u);
    ctx->pc = 0x2A4EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4EB0u;
    // 0x2a4eb4: 0x2409006e  addiu       $t1, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A4EB0u, 0x2A4EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4EB8u;
label_2a4eb8:
    // 0x2a4eb8: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2A4EB8u;
    SET_GPR_U32(ctx, 31, 0x2A4EC0u);
    ctx->pc = 0x2A4EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4EB8u;
    // 0x2a4ebc: 0x24040051  addiu       $a0, $zero, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2A4EB8u, 0x2A4EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4EC0u;
label_2a4ec0:
    // 0x2a4ec0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2a4ec0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ec4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2a4ec4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ec8: 0xc0b65b0  jal         func_2D96C0
    ctx->pc = 0x2A4EC8u;
    SET_GPR_U32(ctx, 31, 0x2A4ED0u);
    ctx->pc = 0x2A4ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4EC8u;
    // 0x2a4ecc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D96C0u, 0x2A4EC8u, 0x2A4ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4ED0u;
label_2a4ed0:
    // 0x2a4ed0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A4ED0u;
    {
        const bool branch_taken_0x2a4ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4ED0u;
        // 0x2a4ed4: 0x26330164  addiu       $s3, $s1, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4ed0) {
            ctx->pc = 0x2A4F10u;
            goto label_2a4f10;
        }
    }
    ctx->pc = 0x2A4ED8u;
    // 0x2a4ed8: 0x8e30015c  lw          $s0, 0x15C($s1)
    ctx->pc = 0x2a4ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x2a4edc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a4edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ee0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a4ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4ee4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a4ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ee8: 0xc0b66c2  jal         func_2D9B08
    ctx->pc = 0x2A4EE8u;
    SET_GPR_U32(ctx, 31, 0x2A4EF0u);
    ctx->pc = 0x2A4EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4EE8u;
    // 0x2a4eec: 0x8e320164  lw          $s2, 0x164($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9B08u, 0x2A4EE8u, 0x2A4EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4EF0u;
label_2a4ef0:
    // 0x2a4ef0: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A4EF0u;
    {
        const bool branch_taken_0x2a4ef0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4EF0u;
        // 0x2a4ef4: 0xae22015c  sw          $v0, 0x15C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4ef0) {
            ctx->pc = 0x2A4F24u;
            goto label_2a4f24;
        }
    }
    ctx->pc = 0x2A4EF8u;
    // 0x2a4ef8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2a4ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a4efc: 0x52420009  beql        $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A4EFCu;
    {
        const bool branch_taken_0x2a4efc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a4efc) {
            ctx->pc = 0x2A4F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4EFCu;
            // 0x2a4f00: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4F24u;
            goto label_2a4f24;
        }
    }
    ctx->pc = 0x2A4F04u;
    // 0x2a4f04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4F04u;
    {
        const bool branch_taken_0x2a4f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F04u;
        // 0x2a4f08: 0x8e220168  lw          $v0, 0x168($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f04) {
            ctx->pc = 0x2A4F28u;
            goto label_2a4f28;
        }
    }
    ctx->pc = 0x2A4F0Cu;
    // 0x2a4f0c: 0x0  nop
    ctx->pc = 0x2a4f0cu;
    // NOP
label_2a4f10:
    // 0x2a4f10: 0x26240164  addiu       $a0, $s1, 0x164
    ctx->pc = 0x2a4f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
    // 0x2a4f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a4f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f18: 0xc0b66c2  jal         func_2D9B08
    ctx->pc = 0x2A4F18u;
    SET_GPR_U32(ctx, 31, 0x2A4F20u);
    ctx->pc = 0x2A4F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4F18u;
    // 0x2a4f1c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9B08u, 0x2A4F18u, 0x2A4F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F20u;
label_2a4f20:
    // 0x2a4f20: 0xae22015c  sw          $v0, 0x15C($s1)
    ctx->pc = 0x2a4f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 2));
label_2a4f24:
    // 0x2a4f24: 0x8e220168  lw          $v0, 0x168($s1)
    ctx->pc = 0x2a4f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
label_2a4f28:
    // 0x2a4f28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4F28u;
    {
        const bool branch_taken_0x2a4f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F28u;
        // 0x2a4f2c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f28) {
            ctx->pc = 0x2A4F44u;
            goto label_2a4f44;
        }
    }
    ctx->pc = 0x2A4F30u;
    // 0x2a4f30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4F30u;
    {
        const bool branch_taken_0x2a4f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F30u;
        // 0x2a4f34: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f30) {
            ctx->pc = 0x2A4F44u;
            goto label_2a4f44;
        }
    }
    ctx->pc = 0x2A4F38u;
    // 0x2a4f38: 0xc0a9448  jal         func_2A5120
    ctx->pc = 0x2A4F38u;
    SET_GPR_U32(ctx, 31, 0x2A4F40u);
    ctx->pc = 0x2A4F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4F38u;
    // 0x2a4f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5120u, 0x2A4F38u, 0x2A4F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F40u;
label_2a4f40:
    // 0x2a4f40: 0xae200168  sw          $zero, 0x168($s1)
    ctx->pc = 0x2a4f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 0));
label_2a4f44:
    // 0x2a4f44: 0x8e25015c  lw          $a1, 0x15C($s1)
    ctx->pc = 0x2a4f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x2a4f48: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x2a4f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x2a4f4c: 0x50a2002f  beql        $a1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2A4F4Cu;
    {
        const bool branch_taken_0x2a4f4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a4f4c) {
            ctx->pc = 0x2A4F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4F4Cu;
            // 0x2a4f50: 0x8e220164  lw          $v0, 0x164($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A500Cu;
            goto label_2a500c;
        }
    }
    ctx->pc = 0x2A4F54u;
    // 0x2a4f54: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x2a4f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x2a4f58: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2a4f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a4f5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4F5Cu;
    {
        const bool branch_taken_0x2a4f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F5Cu;
        // 0x2a4f60: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f5c) {
            ctx->pc = 0x2A4F6Cu;
            goto label_2a4f6c;
        }
    }
    ctx->pc = 0x2A4F64u;
    // 0x2a4f64: 0xae22015c  sw          $v0, 0x15C($s1)
    ctx->pc = 0x2a4f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 2));
    // 0x2a4f68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a4f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4f6c:
    // 0x2a4f6c: 0x4a00022  bltz        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2A4F6Cu;
    {
        const bool branch_taken_0x2a4f6c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2A4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F6Cu;
        // 0x2a4f70: 0xa4102a  slt         $v0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f6c) {
            ctx->pc = 0x2A4FF8u;
            goto label_2a4ff8;
        }
    }
    ctx->pc = 0x2A4F74u;
    // 0x2a4f74: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A4F74u;
    {
        const bool branch_taken_0x2a4f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4f74) {
            ctx->pc = 0x2A4FF8u;
            goto label_2a4ff8;
        }
    }
    ctx->pc = 0x2A4F7Cu;
    // 0x2a4f7c: 0x18800014  blez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A4F7Cu;
    {
        const bool branch_taken_0x2a4f7c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2A4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F7Cu;
        // 0x2a4f80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f7c) {
            ctx->pc = 0x2A4FD0u;
            goto label_2a4fd0;
        }
    }
    ctx->pc = 0x2A4F84u;
    // 0x2a4f84: 0x2627000c  addiu       $a3, $s1, 0xC
    ctx->pc = 0x2a4f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2a4f88: 0x2409efff  addiu       $t1, $zero, -0x1001
    ctx->pc = 0x2a4f88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a4f8c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2a4f8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f90: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2a4f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a4f94: 0x0  nop
    ctx->pc = 0x2a4f94u;
    // NOP
label_2a4f98:
    // 0x2a4f98: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2a4f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a4f9c: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x2a4f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2a4fa0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4FA0u;
    {
        const bool branch_taken_0x2a4fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4FA0u;
        // 0x2a4fa4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4fa0) {
            ctx->pc = 0x2A4FB8u;
            goto label_2a4fb8;
        }
    }
    ctx->pc = 0x2A4FA8u;
    // 0x2a4fa8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a4fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a4fac: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2a4facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2a4fb0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a4fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a4fb4: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x2a4fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
label_2a4fb8:
    // 0x2a4fb8: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x2a4fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a4fbc: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A4FBCu;
    {
        const bool branch_taken_0x2a4fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4fbc) {
            ctx->pc = 0x2A4FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4FBCu;
            // 0x2a4fc0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4f98;
        }
    }
    ctx->pc = 0x2A4FC4u;
    // 0x2a4fc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4FC4u;
    {
        const bool branch_taken_0x2a4fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4FC4u;
        // 0x2a4fc8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4fc4) {
            ctx->pc = 0x2A4FD8u;
            goto label_2a4fd8;
        }
    }
    ctx->pc = 0x2A4FCCu;
    // 0x2a4fcc: 0x0  nop
    ctx->pc = 0x2a4fccu;
    // NOP
label_2a4fd0:
    // 0x2a4fd0: 0x2627000c  addiu       $a3, $s1, 0xC
    ctx->pc = 0x2a4fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2a4fd4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2a4fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2a4fd8:
    // 0x2a4fd8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a4fdc: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x2a4fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2a4fe0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4FE0u;
    {
        const bool branch_taken_0x2a4fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4fe0) {
            ctx->pc = 0x2A4FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4FE0u;
            // 0x2a4fe4: 0x8e25015c  lw          $a1, 0x15C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4FF8u;
            goto label_2a4ff8;
        }
    }
    ctx->pc = 0x2A4FE8u;
    // 0x2a4fe8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a4fec: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a4fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a4ff0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a4ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a4ff4: 0x8e25015c  lw          $a1, 0x15C($s1)
    ctx->pc = 0x2a4ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
label_2a4ff8:
    // 0x2a4ff8: 0xc0926a0  jal         func_249A80
    ctx->pc = 0x2A4FF8u;
    SET_GPR_U32(ctx, 31, 0x2A5000u);
    ctx->pc = 0x2A4FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4FF8u;
    // 0x2a4ffc: 0xae250160  sw          $a1, 0x160($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249A80u, 0x2A4FF8u, 0x2A5000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5000u;
label_2a5000:
    // 0x2a5000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a5000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5004: 0xae220168  sw          $v0, 0x168($s1)
    ctx->pc = 0x2a5004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 2));
    // 0x2a5008: 0x8e220164  lw          $v0, 0x164($s1)
    ctx->pc = 0x2a5008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
label_2a500c:
    // 0x2a500c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a500cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a5010: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A5010u;
    {
        const bool branch_taken_0x2a5010 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5010u;
        // 0x2a5014: 0xae220164  sw          $v0, 0x164($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5010) {
            ctx->pc = 0x2A5028u;
            goto label_2a5028;
        }
    }
    ctx->pc = 0x2A5018u;
    // 0x2a5018: 0x8f82a850  lw          $v0, -0x57B0($gp)
    ctx->pc = 0x2a5018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
    // 0x2a501c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2a501cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2a5020: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A5020u;
    {
        const bool branch_taken_0x2a5020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5020) {
            ctx->pc = 0x2A5068u;
            goto label_2a5068;
        }
    }
    ctx->pc = 0x2A5028u;
label_2a5028:
    // 0x2a5028: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A5028u;
    {
        const bool branch_taken_0x2a5028 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5028) {
            ctx->pc = 0x2A5040u;
            goto label_2a5040;
        }
    }
    ctx->pc = 0x2A5030u;
    // 0x2a5030: 0x8f82a854  lw          $v0, -0x57AC($gp)
    ctx->pc = 0x2a5030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944852)));
    // 0x2a5034: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2a5034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2a5038: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A5038u;
    {
        const bool branch_taken_0x2a5038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5038) {
            ctx->pc = 0x2A5068u;
            goto label_2a5068;
        }
    }
    ctx->pc = 0x2A5040u;
label_2a5040:
    // 0x2a5040: 0x17c00009  bnez        $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A5040u;
    {
        const bool branch_taken_0x2a5040 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5040) {
            ctx->pc = 0x2A5068u;
            goto label_2a5068;
        }
    }
    ctx->pc = 0x2A5048u;
    // 0x2a5048: 0xc0b65b0  jal         func_2D96C0
    ctx->pc = 0x2A5048u;
    SET_GPR_U32(ctx, 31, 0x2A5050u);
    ctx->pc = 0x2A504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5048u;
    // 0x2a504c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D96C0u, 0x2A5048u, 0x2A5050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5050u;
label_2a5050:
    // 0x2a5050: 0xc0b66ce  jal         func_2D9B38
    ctx->pc = 0x2A5050u;
    SET_GPR_U32(ctx, 31, 0x2A5058u);
    ctx->pc = 0x2D9B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9B38u, 0x2A5050u, 0x2A5058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5058u;
label_2a5058:
    // 0x2a5058: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x2a5058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x2a505c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2a505cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a5060: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A5060u;
    {
        const bool branch_taken_0x2a5060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5060) {
            ctx->pc = 0x2A5078u;
            goto label_2a5078;
        }
    }
    ctx->pc = 0x2A5068u;
label_2a5068:
    // 0x2a5068: 0xc0a9456  jal         func_2A5158
    ctx->pc = 0x2A5068u;
    SET_GPR_U32(ctx, 31, 0x2A5070u);
    ctx->pc = 0x2A506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5068u;
    // 0x2a506c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5158u, 0x2A5068u, 0x2A5070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5070u;
label_2a5070:
    // 0x2a5070: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5070u;
    {
        const bool branch_taken_0x2a5070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5070u;
        // 0x2a5074: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5070) {
            ctx->pc = 0x2A5084u;
            goto label_2a5084;
        }
    }
    ctx->pc = 0x2A5078u;
label_2a5078:
    // 0x2a5078: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x2A5078u;
    SET_GPR_U32(ctx, 31, 0x2A5080u);
    ctx->pc = 0x2A507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5078u;
    // 0x2a507c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x2A5078u, 0x2A5080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5080u;
label_2a5080:
    // 0x2a5080: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a5080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5084:
    // 0x2a5084: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2a5084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a5088: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2a5088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a508c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2a508cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a5090: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2a5090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a5094: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2a5094u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a5098: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x2a5098u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a509c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2a509cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a50a0: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x2a50a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2a50a4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2a50a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a50a8: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2a50a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2a50ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2A50ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A50ACu;
        // 0x2a50b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A50ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A50B4u;
    // 0x2a50b4: 0x0  nop
    ctx->pc = 0x2a50b4u;
    // NOP
    ctx->pc = 0x2a50b8u;
}
