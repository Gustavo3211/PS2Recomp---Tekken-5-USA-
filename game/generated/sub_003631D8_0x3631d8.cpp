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

// Function: sub_003631D8
// Address: 0x3631d8 - 0x363398
void sub_003631D8_0x3631d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003631D8_0x3631d8");
#endif

    switch (ctx->pc) {
        case 0x363260u: goto label_363260;
        case 0x363274u: goto label_363274;
        case 0x363290u: goto label_363290;
        case 0x3632b0u: goto label_3632b0;
        case 0x3632c0u: goto label_3632c0;
        case 0x3632d4u: goto label_3632d4;
        case 0x3632f8u: goto label_3632f8;
        case 0x363358u: goto label_363358;
        default: break;
    }

    ctx->pc = 0x3631d8u;

    // 0x3631d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3631d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3631dc: 0x8f83c80c  lw          $v1, -0x37F4($gp)
    ctx->pc = 0x3631dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952972)));
    // 0x3631e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3631e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3631e4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3631e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3631e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3631e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3631ec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3631ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3631f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3631f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3631f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3631f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3631f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3631f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3631fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3631fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363200: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x363200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x363204: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x363204u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363208: 0x1072001f  beq         $v1, $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x363208u;
    {
        const bool branch_taken_0x363208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x36320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363208u;
        // 0x36320c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363208) {
            ctx->pc = 0x363288u;
            goto label_363288;
        }
    }
    ctx->pc = 0x363210u;
    // 0x363210: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x363210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x363214: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x363214u;
    {
        const bool branch_taken_0x363214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x363218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363214u;
        // 0x363218: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363214) {
            ctx->pc = 0x363230u;
            goto label_363230;
        }
    }
    ctx->pc = 0x36321Cu;
    // 0x36321c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x36321Cu;
    {
        const bool branch_taken_0x36321c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x363220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36321Cu;
        // 0x363220: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36321c) {
            ctx->pc = 0x363248u;
            goto label_363248;
        }
    }
    ctx->pc = 0x363224u;
    // 0x363224: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x363224u;
    {
        const bool branch_taken_0x363224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363224u;
        // 0x363228: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363224) {
            ctx->pc = 0x363378u;
            goto label_363378;
        }
    }
    ctx->pc = 0x36322Cu;
    // 0x36322c: 0x0  nop
    ctx->pc = 0x36322cu;
    // NOP
label_363230:
    // 0x363230: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x363230u;
    {
        const bool branch_taken_0x363230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x363234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363230u;
        // 0x363234: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363230) {
            ctx->pc = 0x3632F0u;
            goto label_3632f0;
        }
    }
    ctx->pc = 0x363238u;
    // 0x363238: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x363238u;
    {
        const bool branch_taken_0x363238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363238u;
        // 0x36323c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363238) {
            ctx->pc = 0x363368u;
            goto label_363368;
        }
    }
    ctx->pc = 0x363240u;
    // 0x363240: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x363240u;
    {
        const bool branch_taken_0x363240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363240u;
        // 0x363244: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363240) {
            ctx->pc = 0x363378u;
            goto label_363378;
        }
    }
    ctx->pc = 0x363248u;
label_363248:
    // 0x363248: 0x8f82c800  lw          $v0, -0x3800($gp)
    ctx->pc = 0x363248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952960)));
    // 0x36324c: 0xaf80cc18  sw          $zero, -0x33E8($gp)
    ctx->pc = 0x36324cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954008), GPR_U32(ctx, 0));
    // 0x363250: 0x202182b  sltu        $v1, $s0, $v0
    ctx->pc = 0x363250u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x363254: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x363254u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x363258: 0xc0d6d66  jal         func_35B598
    ctx->pc = 0x363258u;
    SET_GPR_U32(ctx, 31, 0x363260u);
    ctx->pc = 0x36325Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363258u;
    // 0x36325c: 0xaf90cc1c  sw          $s0, -0x33E4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954012), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B598u, 0x363258u, 0x363260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363260u;
label_363260:
    // 0x363260: 0x8f86cc1c  lw          $a2, -0x33E4($gp)
    ctx->pc = 0x363260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954012)));
    // 0x363264: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x363264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x363268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36326c: 0xc0d8bf8  jal         func_362FE0
    ctx->pc = 0x36326Cu;
    SET_GPR_U32(ctx, 31, 0x363274u);
    ctx->pc = 0x363270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36326Cu;
    // 0x363270: 0xaf82cc20  sw          $v0, -0x33E0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954016), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362FE0u, 0x36326Cu, 0x363274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363274u;
label_363274:
    // 0x363274: 0xaf93cc24  sw          $s3, -0x33DC($gp)
    ctx->pc = 0x363274u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954020), GPR_U32(ctx, 19));
    // 0x363278: 0xaf82cc28  sw          $v0, -0x33D8($gp)
    ctx->pc = 0x363278u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954024), GPR_U32(ctx, 2));
    // 0x36327c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x36327Cu;
    {
        const bool branch_taken_0x36327c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36327Cu;
        // 0x363280: 0xaf92c80c  sw          $s2, -0x37F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952972), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36327c) {
            ctx->pc = 0x363370u;
            goto label_363370;
        }
    }
    ctx->pc = 0x363284u;
    // 0x363284: 0x0  nop
    ctx->pc = 0x363284u;
    // NOP
label_363288:
    // 0x363288: 0xc0d8c0e  jal         func_363038
    ctx->pc = 0x363288u;
    SET_GPR_U32(ctx, 31, 0x363290u);
    ctx->pc = 0x36328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363288u;
    // 0x36328c: 0x8f84cc28  lw          $a0, -0x33D8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954024)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363038u, 0x363288u, 0x363290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363290u;
label_363290:
    // 0x363290: 0x54520038  bnel        $v0, $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x363290u;
    {
        const bool branch_taken_0x363290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x363290) {
            ctx->pc = 0x363294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363290u;
            // 0x363294: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363374u;
            goto label_363374;
        }
    }
    ctx->pc = 0x363298u;
    // 0x363298: 0x8f86cc20  lw          $a2, -0x33E0($gp)
    ctx->pc = 0x363298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954016)));
    // 0x36329c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x36329cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3632a0: 0x8f87cc1c  lw          $a3, -0x33E4($gp)
    ctx->pc = 0x3632a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954012)));
    // 0x3632a4: 0x24847770  addiu       $a0, $a0, 0x7770
    ctx->pc = 0x3632a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30576));
    // 0x3632a8: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3632A8u;
    SET_GPR_U32(ctx, 31, 0x3632B0u);
    ctx->pc = 0x3632ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3632A8u;
    // 0x3632ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3632A8u, 0x3632B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3632B0u;
label_3632b0:
    // 0x3632b0: 0x8f84cc20  lw          $a0, -0x33E0($gp)
    ctx->pc = 0x3632b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954016)));
    // 0x3632b4: 0x8f85cc24  lw          $a1, -0x33DC($gp)
    ctx->pc = 0x3632b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954020)));
    // 0x3632b8: 0xc0d8c16  jal         func_363058
    ctx->pc = 0x3632B8u;
    SET_GPR_U32(ctx, 31, 0x3632C0u);
    ctx->pc = 0x3632BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3632B8u;
    // 0x3632bc: 0x8f86cc1c  lw          $a2, -0x33E4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954012)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363058u, 0x3632B8u, 0x3632C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3632C0u;
label_3632c0:
    // 0x3632c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3632C0u;
    {
        const bool branch_taken_0x3632c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3632C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3632C0u;
        // 0x3632c4: 0xaf82cc2c  sw          $v0, -0x33D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294954028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3632c0) {
            ctx->pc = 0x3632E0u;
            goto label_3632e0;
        }
    }
    ctx->pc = 0x3632C8u;
    // 0x3632c8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3632c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3632cc: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3632CCu;
    SET_GPR_U32(ctx, 31, 0x3632D4u);
    ctx->pc = 0x3632D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3632CCu;
    // 0x3632d0: 0x24847798  addiu       $a0, $a0, 0x7798 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3632CCu, 0x3632D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3632D4u;
label_3632d4:
    // 0x3632d4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3632D4u;
    {
        const bool branch_taken_0x3632d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3632D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3632D4u;
        // 0x3632d8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3632d4) {
            ctx->pc = 0x363374u;
            goto label_363374;
        }
    }
    ctx->pc = 0x3632DCu;
    // 0x3632dc: 0x0  nop
    ctx->pc = 0x3632dcu;
    // NOP
label_3632e0:
    // 0x3632e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3632e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3632e4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3632E4u;
    {
        const bool branch_taken_0x3632e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3632E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3632E4u;
        // 0x3632e8: 0xaf82c80c  sw          $v0, -0x37F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3632e4) {
            ctx->pc = 0x363370u;
            goto label_363370;
        }
    }
    ctx->pc = 0x3632ECu;
    // 0x3632ec: 0x0  nop
    ctx->pc = 0x3632ecu;
    // NOP
label_3632f0:
    // 0x3632f0: 0xc0d8c1c  jal         func_363070
    ctx->pc = 0x3632F0u;
    SET_GPR_U32(ctx, 31, 0x3632F8u);
    ctx->pc = 0x3632F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3632F0u;
    // 0x3632f4: 0x8f84cc2c  lw          $a0, -0x33D4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954028)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363070u, 0x3632F0u, 0x3632F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3632F8u;
label_3632f8:
    // 0x3632f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3632f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3632fc: 0x1672001d  bne         $s3, $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x3632FCu;
    {
        const bool branch_taken_0x3632fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x363300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3632FCu;
        // 0x363300: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3632fc) {
            ctx->pc = 0x363374u;
            goto label_363374;
        }
    }
    ctx->pc = 0x363304u;
    // 0x363304: 0x8f82cc18  lw          $v0, -0x33E8($gp)
    ctx->pc = 0x363304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954008)));
    // 0x363308: 0x8f88cc1c  lw          $t0, -0x33E4($gp)
    ctx->pc = 0x363308u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954012)));
    // 0x36330c: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x36330cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x363310: 0x90182b  sltu        $v1, $a0, $s0
    ctx->pc = 0x363310u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x363314: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x363314u;
    {
        const bool branch_taken_0x363314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x363318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363314u;
        // 0x363318: 0xaf84cc18  sw          $a0, -0x33E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294954008), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363314) {
            ctx->pc = 0x363328u;
            goto label_363328;
        }
    }
    ctx->pc = 0x36331Cu;
    // 0x36331c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x36331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x363320: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x363320u;
    {
        const bool branch_taken_0x363320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363320u;
        // 0x363324: 0xaf82c80c  sw          $v0, -0x37F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363320) {
            ctx->pc = 0x363370u;
            goto label_363370;
        }
    }
    ctx->pc = 0x363328u;
label_363328:
    // 0x363328: 0x8f82c800  lw          $v0, -0x3800($gp)
    ctx->pc = 0x363328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952960)));
    // 0x36332c: 0x2043823  subu        $a3, $s0, $a0
    ctx->pc = 0x36332cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x363330: 0x8f83cc24  lw          $v1, -0x33DC($gp)
    ctx->pc = 0x363330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954020)));
    // 0x363334: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x363334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x363338: 0xe2302b  sltu        $a2, $a3, $v0
    ctx->pc = 0x363338u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36333c: 0x8f85cc20  lw          $a1, -0x33E0($gp)
    ctx->pc = 0x36333cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954016)));
    // 0x363340: 0xe6100b  movn        $v0, $a3, $a2
    ctx->pc = 0x363340u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x363344: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x363344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x363348: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x363348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36334c: 0xaf83cc24  sw          $v1, -0x33DC($gp)
    ctx->pc = 0x36334cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954020), GPR_U32(ctx, 3));
    // 0x363350: 0xc0d8bf8  jal         func_362FE0
    ctx->pc = 0x363350u;
    SET_GPR_U32(ctx, 31, 0x363358u);
    ctx->pc = 0x363354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363350u;
    // 0x363354: 0xaf82cc1c  sw          $v0, -0x33E4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954012), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362FE0u, 0x363350u, 0x363358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363358u;
label_363358:
    // 0x363358: 0xaf82cc28  sw          $v0, -0x33D8($gp)
    ctx->pc = 0x363358u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954024), GPR_U32(ctx, 2));
    // 0x36335c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36335Cu;
    {
        const bool branch_taken_0x36335c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36335Cu;
        // 0x363360: 0xaf93c80c  sw          $s3, -0x37F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952972), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36335c) {
            ctx->pc = 0x363370u;
            goto label_363370;
        }
    }
    ctx->pc = 0x363364u;
    // 0x363364: 0x0  nop
    ctx->pc = 0x363364u;
    // NOP
label_363368:
    // 0x363368: 0xaf80c80c  sw          $zero, -0x37F4($gp)
    ctx->pc = 0x363368u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952972), GPR_U32(ctx, 0));
    // 0x36336c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x36336cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_363370:
    // 0x363370: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x363370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_363374:
    // 0x363374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x363374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_363378:
    // 0x363378: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x363378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36337c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36337cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363380: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x363380u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363384: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x363384u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363388: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x363388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36338c: 0x3e00008  jr          $ra
    ctx->pc = 0x36338Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36338Cu;
        // 0x363390: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36338Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363394u;
    // 0x363394: 0x0  nop
    ctx->pc = 0x363394u;
    // NOP
    ctx->pc = 0x363398u;
}
