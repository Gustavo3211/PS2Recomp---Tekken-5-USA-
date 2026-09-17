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

// Function: sub_0048D270
// Address: 0x48d270 - 0x48d348
void sub_0048D270_0x48d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D270_0x48d270");
#endif

    switch (ctx->pc) {
        case 0x48d270u: goto label_48d270;
        case 0x48d274u: goto label_48d274;
        case 0x48d278u: goto label_48d278;
        case 0x48d27cu: goto label_48d27c;
        case 0x48d280u: goto label_48d280;
        case 0x48d284u: goto label_48d284;
        case 0x48d288u: goto label_48d288;
        case 0x48d28cu: goto label_48d28c;
        case 0x48d290u: goto label_48d290;
        case 0x48d294u: goto label_48d294;
        case 0x48d298u: goto label_48d298;
        case 0x48d29cu: goto label_48d29c;
        case 0x48d2a0u: goto label_48d2a0;
        case 0x48d2a4u: goto label_48d2a4;
        case 0x48d2a8u: goto label_48d2a8;
        case 0x48d2acu: goto label_48d2ac;
        case 0x48d2b0u: goto label_48d2b0;
        case 0x48d2b4u: goto label_48d2b4;
        case 0x48d2b8u: goto label_48d2b8;
        case 0x48d2bcu: goto label_48d2bc;
        case 0x48d2c0u: goto label_48d2c0;
        case 0x48d2c4u: goto label_48d2c4;
        case 0x48d2c8u: goto label_48d2c8;
        case 0x48d2ccu: goto label_48d2cc;
        case 0x48d2d0u: goto label_48d2d0;
        case 0x48d2d4u: goto label_48d2d4;
        case 0x48d2d8u: goto label_48d2d8;
        case 0x48d2dcu: goto label_48d2dc;
        case 0x48d2e0u: goto label_48d2e0;
        case 0x48d2e4u: goto label_48d2e4;
        case 0x48d2e8u: goto label_48d2e8;
        case 0x48d2ecu: goto label_48d2ec;
        case 0x48d2f0u: goto label_48d2f0;
        case 0x48d2f4u: goto label_48d2f4;
        case 0x48d2f8u: goto label_48d2f8;
        case 0x48d2fcu: goto label_48d2fc;
        case 0x48d300u: goto label_48d300;
        case 0x48d304u: goto label_48d304;
        case 0x48d308u: goto label_48d308;
        case 0x48d30cu: goto label_48d30c;
        case 0x48d310u: goto label_48d310;
        case 0x48d314u: goto label_48d314;
        case 0x48d318u: goto label_48d318;
        case 0x48d31cu: goto label_48d31c;
        case 0x48d320u: goto label_48d320;
        case 0x48d324u: goto label_48d324;
        case 0x48d328u: goto label_48d328;
        case 0x48d32cu: goto label_48d32c;
        case 0x48d330u: goto label_48d330;
        case 0x48d334u: goto label_48d334;
        case 0x48d338u: goto label_48d338;
        case 0x48d33cu: goto label_48d33c;
        case 0x48d340u: goto label_48d340;
        case 0x48d344u: goto label_48d344;
        default: break;
    }

    ctx->pc = 0x48d270u;

label_48d270:
    // 0x48d270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48d270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_48d274:
    // 0x48d274: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x48d274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_48d278:
    // 0x48d278: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x48d278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_48d27c:
    // 0x48d27c: 0x24535f40  addiu       $s3, $v0, 0x5F40
    ctx->pc = 0x48d27cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24384));
label_48d280:
    // 0x48d280: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48d280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_48d284:
    // 0x48d284: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48d284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_48d288:
    // 0x48d288: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x48d288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_48d28c:
    // 0x48d28c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x48d28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_48d290:
    // 0x48d290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48d290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_48d294:
    // 0x48d294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48d294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48d298:
    // 0x48d298: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x48d298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_48d29c:
    // 0x48d29c: 0x26740004  addiu       $s4, $s3, 0x4
    ctx->pc = 0x48d29cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_48d2a0:
    // 0x48d2a0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x48d2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_48d2a4:
    // 0x48d2a4: 0x26750008  addiu       $s5, $s3, 0x8
    ctx->pc = 0x48d2a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_48d2a8:
    // 0x48d2a8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x48d2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_48d2ac:
    // 0x48d2ac: 0x2476d680  addiu       $s6, $v1, -0x2980
    ctx->pc = 0x48d2acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
label_48d2b0:
    // 0x48d2b0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x48d2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_48d2b4:
    // 0x48d2b4: 0x0  nop
    ctx->pc = 0x48d2b4u;
    // NOP
label_48d2b8:
    // 0x48d2b8: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x48d2b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_48d2bc:
    // 0x48d2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48d2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48d2c0:
    // 0x48d2c0: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x48d2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_48d2c4:
    // 0x48d2c4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x48d2c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48d2c8:
    // 0x48d2c8: 0x2332821  addu        $a1, $s1, $s3
    ctx->pc = 0x48d2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_48d2cc:
    // 0x48d2cc: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_48d2d0:
    if (ctx->pc == 0x48D2D0u) {
        ctx->pc = 0x48D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D2CCu;
        // 0x48d2d0: 0x2551821  addu        $v1, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48D2D4u;
        goto label_48d2d4;
    }
    ctx->pc = 0x48D2CCu;
    {
        const bool branch_taken_0x48d2cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x48D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D2CCu;
        // 0x48d2d0: 0x2551821  addu        $v1, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d2cc) {
            ctx->pc = 0x48D320u;
            goto label_48d320;
        }
    }
    ctx->pc = 0x48D2D4u;
label_48d2d4:
    // 0x48d2d4: 0x86c2007a  lh          $v0, 0x7A($s6)
    ctx->pc = 0x48d2d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 122)));
label_48d2d8:
    // 0x48d2d8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_48d2dc:
    if (ctx->pc == 0x48D2DCu) {
        ctx->pc = 0x48D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D2D8u;
        // 0x48d2dc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48D2E0u;
        goto label_48d2e0;
    }
    ctx->pc = 0x48D2D8u;
    {
        const bool branch_taken_0x48d2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d2d8) {
            ctx->pc = 0x48D2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48D2D8u;
            // 0x48d2dc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48D2F8u;
            goto label_48d2f8;
        }
    }
    ctx->pc = 0x48D2E0u;
label_48d2e0:
    // 0x48d2e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x48d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_48d2e4:
    // 0x48d2e4: 0x40f809  jalr        $v0
label_48d2e8:
    if (ctx->pc == 0x48D2E8u) {
        ctx->pc = 0x48D2ECu;
        goto label_48d2ec;
    }
    ctx->pc = 0x48D2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48D2ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D2E4u, 0x48D2ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48D2ECu;
label_48d2ec:
    // 0x48d2ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48d2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48d2f0:
    // 0x48d2f0: 0x10000005  b           . + 4 + (0x5 << 2)
label_48d2f4:
    if (ctx->pc == 0x48D2F4u) {
        ctx->pc = 0x48D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D2F0u;
        // 0x48d2f4: 0x2341021  addu        $v0, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48D2F8u;
        goto label_48d2f8;
    }
    ctx->pc = 0x48D2F0u;
    {
        const bool branch_taken_0x48d2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D2F0u;
        // 0x48d2f4: 0x2341021  addu        $v0, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d2f0) {
            ctx->pc = 0x48D308u;
            goto label_48d308;
        }
    }
    ctx->pc = 0x48D2F8u;
label_48d2f8:
    // 0x48d2f8: 0x40f809  jalr        $v0
label_48d2fc:
    if (ctx->pc == 0x48D2FCu) {
        ctx->pc = 0x48D2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D2F8u;
        // 0x48d2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48D300u;
        goto label_48d300;
    }
    ctx->pc = 0x48D2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48D300u);
        ctx->pc = 0x48D2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D2F8u;
        // 0x48d2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D2F8u, 0x48D300u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48D300u;
label_48d300:
    // 0x48d300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48d300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48d304:
    // 0x48d304: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x48d304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_48d308:
    // 0x48d308: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48d308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48d30c:
    // 0x48d30c: 0x60f809  jalr        $v1
label_48d310:
    if (ctx->pc == 0x48D310u) {
        ctx->pc = 0x48D314u;
        goto label_48d314;
    }
    ctx->pc = 0x48D30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x48D314u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D30Cu, 0x48D314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48D314u;
label_48d314:
    // 0x48d314: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_48d318:
    if (ctx->pc == 0x48D318u) {
        ctx->pc = 0x48D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D314u;
        // 0x48d318: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48D31Cu;
        goto label_48d31c;
    }
    ctx->pc = 0x48D314u;
    {
        const bool branch_taken_0x48d314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D314u;
        // 0x48d318: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d314) {
            ctx->pc = 0x48D2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48d2b8;
        }
    }
    ctx->pc = 0x48D31Cu;
label_48d31c:
    // 0x48d31c: 0x0  nop
    ctx->pc = 0x48d31cu;
    // NOP
label_48d320:
    // 0x48d320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48d320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48d324:
    // 0x48d324: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48d324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_48d328:
    // 0x48d328: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48d328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48d32c:
    // 0x48d32c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x48d32cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_48d330:
    // 0x48d330: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x48d330u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48d334:
    // 0x48d334: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x48d334u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_48d338:
    // 0x48d338: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x48d338u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_48d33c:
    // 0x48d33c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x48d33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_48d340:
    // 0x48d340: 0x3e00008  jr          $ra
label_48d344:
    if (ctx->pc == 0x48D344u) {
        ctx->pc = 0x48D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D340u;
        // 0x48d344: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48D348u;
        goto label_fallthrough_0x48d340;
    }
    ctx->pc = 0x48D340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D340u;
        // 0x48d344: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x48d340:
    ctx->pc = 0x48D348u;
}
