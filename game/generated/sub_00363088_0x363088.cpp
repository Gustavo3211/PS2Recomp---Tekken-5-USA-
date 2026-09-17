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

// Function: sub_00363088
// Address: 0x363088 - 0x3631d8
void sub_00363088_0x363088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363088_0x363088");
#endif

    switch (ctx->pc) {
        case 0x363108u: goto label_363108;
        case 0x36311cu: goto label_36311c;
        case 0x363130u: goto label_363130;
        case 0x363150u: goto label_363150;
        case 0x363160u: goto label_363160;
        case 0x363174u: goto label_363174;
        case 0x363198u: goto label_363198;
        default: break;
    }

    ctx->pc = 0x363088u;

    // 0x363088: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x363088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36308c: 0x8f88c808  lw          $t0, -0x37F8($gp)
    ctx->pc = 0x36308cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952968)));
    // 0x363090: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x363090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x363094: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x363094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363098: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x363098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36309c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36309cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3630a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3630a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3630a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3630a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3630a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3630a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3630ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3630acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3630b0: 0x1110001d  beq         $t0, $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3630B0u;
    {
        const bool branch_taken_0x3630b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 16));
        ctx->pc = 0x3630B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3630B0u;
        // 0x3630b4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3630b0) {
            ctx->pc = 0x363128u;
            goto label_363128;
        }
    }
    ctx->pc = 0x3630B8u;
    // 0x3630b8: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x3630b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3630bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3630BCu;
    {
        const bool branch_taken_0x3630bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3630C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3630BCu;
        // 0x3630c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3630bc) {
            ctx->pc = 0x3630D8u;
            goto label_3630d8;
        }
    }
    ctx->pc = 0x3630C4u;
    // 0x3630c4: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x3630C4u;
    {
        const bool branch_taken_0x3630c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3630C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3630C4u;
        // 0x3630c8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3630c4) {
            ctx->pc = 0x3630F0u;
            goto label_3630f0;
        }
    }
    ctx->pc = 0x3630CCu;
    // 0x3630cc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3630CCu;
    {
        const bool branch_taken_0x3630cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3630D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3630CCu;
        // 0x3630d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3630cc) {
            ctx->pc = 0x3631C0u;
            goto label_3631c0;
        }
    }
    ctx->pc = 0x3630D4u;
    // 0x3630d4: 0x0  nop
    ctx->pc = 0x3630d4u;
    // NOP
label_3630d8:
    // 0x3630d8: 0x1102002d  beq         $t0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3630D8u;
    {
        const bool branch_taken_0x3630d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x3630DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3630D8u;
        // 0x3630dc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3630d8) {
            ctx->pc = 0x363190u;
            goto label_363190;
        }
    }
    ctx->pc = 0x3630E0u;
    // 0x3630e0: 0x11020033  beq         $t0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x3630E0u;
    {
        const bool branch_taken_0x3630e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x3630E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3630E0u;
        // 0x3630e4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3630e0) {
            ctx->pc = 0x3631B0u;
            goto label_3631b0;
        }
    }
    ctx->pc = 0x3630E8u;
    // 0x3630e8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3630E8u;
    {
        const bool branch_taken_0x3630e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3630ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3630E8u;
        // 0x3630ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3630e8) {
            ctx->pc = 0x3631C0u;
            goto label_3631c0;
        }
    }
    ctx->pc = 0x3630F0u;
label_3630f0:
    // 0x3630f0: 0x8f82c800  lw          $v0, -0x3800($gp)
    ctx->pc = 0x3630f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952960)));
    // 0x3630f4: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x3630f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3630f8: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x3630f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3630fc: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x3630fcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x363100: 0xc0d6d66  jal         func_35B598
    ctx->pc = 0x363100u;
    SET_GPR_U32(ctx, 31, 0x363108u);
    ctx->pc = 0x363104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363100u;
    // 0x363104: 0xaf86cc08  sw          $a2, -0x33F8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953992), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B598u, 0x363100u, 0x363108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363108u;
label_363108:
    // 0x363108: 0x8f86cc08  lw          $a2, -0x33F8($gp)
    ctx->pc = 0x363108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953992)));
    // 0x36310c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36310cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x363110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363114: 0xc0d8bf8  jal         func_362FE0
    ctx->pc = 0x363114u;
    SET_GPR_U32(ctx, 31, 0x36311Cu);
    ctx->pc = 0x363118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363114u;
    // 0x363118: 0xaf82cc0c  sw          $v0, -0x33F4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953996), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362FE0u, 0x363114u, 0x36311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36311Cu;
label_36311c:
    // 0x36311c: 0xaf90c808  sw          $s0, -0x37F8($gp)
    ctx->pc = 0x36311cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952968), GPR_U32(ctx, 16));
    // 0x363120: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x363120u;
    {
        const bool branch_taken_0x363120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363120u;
        // 0x363124: 0xaf82cc10  sw          $v0, -0x33F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294954000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363120) {
            ctx->pc = 0x3631B8u;
            goto label_3631b8;
        }
    }
    ctx->pc = 0x363128u;
label_363128:
    // 0x363128: 0xc0d8c0e  jal         func_363038
    ctx->pc = 0x363128u;
    SET_GPR_U32(ctx, 31, 0x363130u);
    ctx->pc = 0x36312Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363128u;
    // 0x36312c: 0x8f84cc10  lw          $a0, -0x33F0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363038u, 0x363128u, 0x363130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363130u;
label_363130:
    // 0x363130: 0x54500022  bnel        $v0, $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x363130u;
    {
        const bool branch_taken_0x363130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x363130) {
            ctx->pc = 0x363134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363130u;
            // 0x363134: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3631BCu;
            goto label_3631bc;
        }
    }
    ctx->pc = 0x363138u;
    // 0x363138: 0x8f86cc0c  lw          $a2, -0x33F4($gp)
    ctx->pc = 0x363138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953996)));
    // 0x36313c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x36313cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x363140: 0x8f87cc08  lw          $a3, -0x33F8($gp)
    ctx->pc = 0x363140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953992)));
    // 0x363144: 0x24847770  addiu       $a0, $a0, 0x7770
    ctx->pc = 0x363144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30576));
    // 0x363148: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x363148u;
    SET_GPR_U32(ctx, 31, 0x363150u);
    ctx->pc = 0x36314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363148u;
    // 0x36314c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x363148u, 0x363150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363150u;
label_363150:
    // 0x363150: 0x8f84cc0c  lw          $a0, -0x33F4($gp)
    ctx->pc = 0x363150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953996)));
    // 0x363154: 0x8f86cc08  lw          $a2, -0x33F8($gp)
    ctx->pc = 0x363154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953992)));
    // 0x363158: 0xc0d8c16  jal         func_363058
    ctx->pc = 0x363158u;
    SET_GPR_U32(ctx, 31, 0x363160u);
    ctx->pc = 0x36315Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363158u;
    // 0x36315c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363058u, 0x363158u, 0x363160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363160u;
label_363160:
    // 0x363160: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x363160u;
    {
        const bool branch_taken_0x363160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x363164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363160u;
        // 0x363164: 0xaf82cc14  sw          $v0, -0x33EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294954004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363160) {
            ctx->pc = 0x363180u;
            goto label_363180;
        }
    }
    ctx->pc = 0x363168u;
    // 0x363168: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x363168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x36316c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x36316Cu;
    SET_GPR_U32(ctx, 31, 0x363174u);
    ctx->pc = 0x363170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36316Cu;
    // 0x363170: 0x24847798  addiu       $a0, $a0, 0x7798 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x36316Cu, 0x363174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363174u;
label_363174:
    // 0x363174: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x363174u;
    {
        const bool branch_taken_0x363174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363174u;
        // 0x363178: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363174) {
            ctx->pc = 0x3631BCu;
            goto label_3631bc;
        }
    }
    ctx->pc = 0x36317Cu;
    // 0x36317c: 0x0  nop
    ctx->pc = 0x36317cu;
    // NOP
label_363180:
    // 0x363180: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x363180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363184: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x363184u;
    {
        const bool branch_taken_0x363184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363184u;
        // 0x363188: 0xaf82c808  sw          $v0, -0x37F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952968), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363184) {
            ctx->pc = 0x3631B8u;
            goto label_3631b8;
        }
    }
    ctx->pc = 0x36318Cu;
    // 0x36318c: 0x0  nop
    ctx->pc = 0x36318cu;
    // NOP
label_363190:
    // 0x363190: 0xc0d8c1c  jal         func_363070
    ctx->pc = 0x363190u;
    SET_GPR_U32(ctx, 31, 0x363198u);
    ctx->pc = 0x363194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363190u;
    // 0x363194: 0x8f84cc14  lw          $a0, -0x33EC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954004)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363070u, 0x363190u, 0x363198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363198u;
label_363198:
    // 0x363198: 0x14500008  bne         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x363198u;
    {
        const bool branch_taken_0x363198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x36319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363198u;
        // 0x36319c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363198) {
            ctx->pc = 0x3631BCu;
            goto label_3631bc;
        }
    }
    ctx->pc = 0x3631A0u;
    // 0x3631a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3631a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3631a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3631A4u;
    {
        const bool branch_taken_0x3631a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3631A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3631A4u;
        // 0x3631a8: 0xaf82c808  sw          $v0, -0x37F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952968), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3631a4) {
            ctx->pc = 0x3631B8u;
            goto label_3631b8;
        }
    }
    ctx->pc = 0x3631ACu;
    // 0x3631ac: 0x0  nop
    ctx->pc = 0x3631acu;
    // NOP
label_3631b0:
    // 0x3631b0: 0xaf80c808  sw          $zero, -0x37F8($gp)
    ctx->pc = 0x3631b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952968), GPR_U32(ctx, 0));
    // 0x3631b4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3631b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3631b8:
    // 0x3631b8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3631b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3631bc:
    // 0x3631bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3631bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3631c0:
    // 0x3631c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3631c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3631c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3631c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3631c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3631c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3631cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3631ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3631d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3631D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3631D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3631D0u;
        // 0x3631d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3631D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3631D8u;
}
