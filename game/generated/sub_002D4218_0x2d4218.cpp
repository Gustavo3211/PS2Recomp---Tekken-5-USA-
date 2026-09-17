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

// Function: sub_002D4218
// Address: 0x2d4218 - 0x2d44e8
void sub_002D4218_0x2d4218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4218_0x2d4218");
#endif

    switch (ctx->pc) {
        case 0x2d4218u: goto label_2d4218;
        case 0x2d421cu: goto label_2d421c;
        case 0x2d4220u: goto label_2d4220;
        case 0x2d4224u: goto label_2d4224;
        case 0x2d4228u: goto label_2d4228;
        case 0x2d422cu: goto label_2d422c;
        case 0x2d4230u: goto label_2d4230;
        case 0x2d4234u: goto label_2d4234;
        case 0x2d4238u: goto label_2d4238;
        case 0x2d423cu: goto label_2d423c;
        case 0x2d4240u: goto label_2d4240;
        case 0x2d4244u: goto label_2d4244;
        case 0x2d4248u: goto label_2d4248;
        case 0x2d424cu: goto label_2d424c;
        case 0x2d4250u: goto label_2d4250;
        case 0x2d4254u: goto label_2d4254;
        case 0x2d4258u: goto label_2d4258;
        case 0x2d425cu: goto label_2d425c;
        case 0x2d4260u: goto label_2d4260;
        case 0x2d4264u: goto label_2d4264;
        case 0x2d4268u: goto label_2d4268;
        case 0x2d426cu: goto label_2d426c;
        case 0x2d4270u: goto label_2d4270;
        case 0x2d4274u: goto label_2d4274;
        case 0x2d4278u: goto label_2d4278;
        case 0x2d427cu: goto label_2d427c;
        case 0x2d4280u: goto label_2d4280;
        case 0x2d4284u: goto label_2d4284;
        case 0x2d4288u: goto label_2d4288;
        case 0x2d428cu: goto label_2d428c;
        case 0x2d4290u: goto label_2d4290;
        case 0x2d4294u: goto label_2d4294;
        case 0x2d4298u: goto label_2d4298;
        case 0x2d429cu: goto label_2d429c;
        case 0x2d42a0u: goto label_2d42a0;
        case 0x2d42a4u: goto label_2d42a4;
        case 0x2d42a8u: goto label_2d42a8;
        case 0x2d42acu: goto label_2d42ac;
        case 0x2d42b0u: goto label_2d42b0;
        case 0x2d42b4u: goto label_2d42b4;
        case 0x2d42b8u: goto label_2d42b8;
        case 0x2d42bcu: goto label_2d42bc;
        case 0x2d42c0u: goto label_2d42c0;
        case 0x2d42c4u: goto label_2d42c4;
        case 0x2d42c8u: goto label_2d42c8;
        case 0x2d42ccu: goto label_2d42cc;
        case 0x2d42d0u: goto label_2d42d0;
        case 0x2d42d4u: goto label_2d42d4;
        case 0x2d42d8u: goto label_2d42d8;
        case 0x2d42dcu: goto label_2d42dc;
        case 0x2d42e0u: goto label_2d42e0;
        case 0x2d42e4u: goto label_2d42e4;
        case 0x2d42e8u: goto label_2d42e8;
        case 0x2d42ecu: goto label_2d42ec;
        case 0x2d42f0u: goto label_2d42f0;
        case 0x2d42f4u: goto label_2d42f4;
        case 0x2d42f8u: goto label_2d42f8;
        case 0x2d42fcu: goto label_2d42fc;
        case 0x2d4300u: goto label_2d4300;
        case 0x2d4304u: goto label_2d4304;
        case 0x2d4308u: goto label_2d4308;
        case 0x2d430cu: goto label_2d430c;
        case 0x2d4310u: goto label_2d4310;
        case 0x2d4314u: goto label_2d4314;
        case 0x2d4318u: goto label_2d4318;
        case 0x2d431cu: goto label_2d431c;
        case 0x2d4320u: goto label_2d4320;
        case 0x2d4324u: goto label_2d4324;
        case 0x2d4328u: goto label_2d4328;
        case 0x2d432cu: goto label_2d432c;
        case 0x2d4330u: goto label_2d4330;
        case 0x2d4334u: goto label_2d4334;
        case 0x2d4338u: goto label_2d4338;
        case 0x2d433cu: goto label_2d433c;
        case 0x2d4340u: goto label_2d4340;
        case 0x2d4344u: goto label_2d4344;
        case 0x2d4348u: goto label_2d4348;
        case 0x2d434cu: goto label_2d434c;
        case 0x2d4350u: goto label_2d4350;
        case 0x2d4354u: goto label_2d4354;
        case 0x2d4358u: goto label_2d4358;
        case 0x2d435cu: goto label_2d435c;
        case 0x2d4360u: goto label_2d4360;
        case 0x2d4364u: goto label_2d4364;
        case 0x2d4368u: goto label_2d4368;
        case 0x2d436cu: goto label_2d436c;
        case 0x2d4370u: goto label_2d4370;
        case 0x2d4374u: goto label_2d4374;
        case 0x2d4378u: goto label_2d4378;
        case 0x2d437cu: goto label_2d437c;
        case 0x2d4380u: goto label_2d4380;
        case 0x2d4384u: goto label_2d4384;
        case 0x2d4388u: goto label_2d4388;
        case 0x2d438cu: goto label_2d438c;
        case 0x2d4390u: goto label_2d4390;
        case 0x2d4394u: goto label_2d4394;
        case 0x2d4398u: goto label_2d4398;
        case 0x2d439cu: goto label_2d439c;
        case 0x2d43a0u: goto label_2d43a0;
        case 0x2d43a4u: goto label_2d43a4;
        case 0x2d43a8u: goto label_2d43a8;
        case 0x2d43acu: goto label_2d43ac;
        case 0x2d43b0u: goto label_2d43b0;
        case 0x2d43b4u: goto label_2d43b4;
        case 0x2d43b8u: goto label_2d43b8;
        case 0x2d43bcu: goto label_2d43bc;
        case 0x2d43c0u: goto label_2d43c0;
        case 0x2d43c4u: goto label_2d43c4;
        case 0x2d43c8u: goto label_2d43c8;
        case 0x2d43ccu: goto label_2d43cc;
        case 0x2d43d0u: goto label_2d43d0;
        case 0x2d43d4u: goto label_2d43d4;
        case 0x2d43d8u: goto label_2d43d8;
        case 0x2d43dcu: goto label_2d43dc;
        case 0x2d43e0u: goto label_2d43e0;
        case 0x2d43e4u: goto label_2d43e4;
        case 0x2d43e8u: goto label_2d43e8;
        case 0x2d43ecu: goto label_2d43ec;
        case 0x2d43f0u: goto label_2d43f0;
        case 0x2d43f4u: goto label_2d43f4;
        case 0x2d43f8u: goto label_2d43f8;
        case 0x2d43fcu: goto label_2d43fc;
        case 0x2d4400u: goto label_2d4400;
        case 0x2d4404u: goto label_2d4404;
        case 0x2d4408u: goto label_2d4408;
        case 0x2d440cu: goto label_2d440c;
        case 0x2d4410u: goto label_2d4410;
        case 0x2d4414u: goto label_2d4414;
        case 0x2d4418u: goto label_2d4418;
        case 0x2d441cu: goto label_2d441c;
        case 0x2d4420u: goto label_2d4420;
        case 0x2d4424u: goto label_2d4424;
        case 0x2d4428u: goto label_2d4428;
        case 0x2d442cu: goto label_2d442c;
        case 0x2d4430u: goto label_2d4430;
        case 0x2d4434u: goto label_2d4434;
        case 0x2d4438u: goto label_2d4438;
        case 0x2d443cu: goto label_2d443c;
        case 0x2d4440u: goto label_2d4440;
        case 0x2d4444u: goto label_2d4444;
        case 0x2d4448u: goto label_2d4448;
        case 0x2d444cu: goto label_2d444c;
        case 0x2d4450u: goto label_2d4450;
        case 0x2d4454u: goto label_2d4454;
        case 0x2d4458u: goto label_2d4458;
        case 0x2d445cu: goto label_2d445c;
        case 0x2d4460u: goto label_2d4460;
        case 0x2d4464u: goto label_2d4464;
        case 0x2d4468u: goto label_2d4468;
        case 0x2d446cu: goto label_2d446c;
        case 0x2d4470u: goto label_2d4470;
        case 0x2d4474u: goto label_2d4474;
        case 0x2d4478u: goto label_2d4478;
        case 0x2d447cu: goto label_2d447c;
        case 0x2d4480u: goto label_2d4480;
        case 0x2d4484u: goto label_2d4484;
        case 0x2d4488u: goto label_2d4488;
        case 0x2d448cu: goto label_2d448c;
        case 0x2d4490u: goto label_2d4490;
        case 0x2d4494u: goto label_2d4494;
        case 0x2d4498u: goto label_2d4498;
        case 0x2d449cu: goto label_2d449c;
        case 0x2d44a0u: goto label_2d44a0;
        case 0x2d44a4u: goto label_2d44a4;
        case 0x2d44a8u: goto label_2d44a8;
        case 0x2d44acu: goto label_2d44ac;
        case 0x2d44b0u: goto label_2d44b0;
        case 0x2d44b4u: goto label_2d44b4;
        case 0x2d44b8u: goto label_2d44b8;
        case 0x2d44bcu: goto label_2d44bc;
        case 0x2d44c0u: goto label_2d44c0;
        case 0x2d44c4u: goto label_2d44c4;
        case 0x2d44c8u: goto label_2d44c8;
        case 0x2d44ccu: goto label_2d44cc;
        case 0x2d44d0u: goto label_2d44d0;
        case 0x2d44d4u: goto label_2d44d4;
        case 0x2d44d8u: goto label_2d44d8;
        case 0x2d44dcu: goto label_2d44dc;
        case 0x2d44e0u: goto label_2d44e0;
        case 0x2d44e4u: goto label_2d44e4;
        default: break;
    }

    ctx->pc = 0x2d4218u;

label_2d4218:
    // 0x2d4218: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d4218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d421c:
    // 0x2d421c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d421cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2d4220:
    // 0x2d4220: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d4224:
    // 0x2d4224: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2d4224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_2d4228:
    // 0x2d4228: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d4228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2d422c:
    // 0x2d422c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2d422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2d4230:
    // 0x2d4230: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2d4234:
    if (ctx->pc == 0x2D4234u) {
        ctx->pc = 0x2D4234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4230u;
        // 0x2d4234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4238u;
        goto label_2d4238;
    }
    ctx->pc = 0x2D4230u;
    {
        const bool branch_taken_0x2d4230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4230u;
        // 0x2d4234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4230) {
            ctx->pc = 0x2D4248u;
            goto label_2d4248;
        }
    }
    ctx->pc = 0x2D4238u;
label_2d4238:
    // 0x2d4238: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_2d423c:
    if (ctx->pc == 0x2D423Cu) {
        ctx->pc = 0x2D423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4238u;
        // 0x2d423c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4240u;
        goto label_2d4240;
    }
    ctx->pc = 0x2D4238u;
    {
        const bool branch_taken_0x2d4238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4238u;
        // 0x2d423c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4238) {
            ctx->pc = 0x2D4278u;
            goto label_2d4278;
        }
    }
    ctx->pc = 0x2D4240u;
label_2d4240:
    // 0x2d4240: 0x1000006e  b           . + 4 + (0x6E << 2)
label_2d4244:
    if (ctx->pc == 0x2D4244u) {
        ctx->pc = 0x2D4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4240u;
        // 0x2d4244: 0x8c8388ac  lw          $v1, -0x7754($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936748)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4248u;
        goto label_2d4248;
    }
    ctx->pc = 0x2D4240u;
    {
        const bool branch_taken_0x2d4240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4240u;
        // 0x2d4244: 0x8c8388ac  lw          $v1, -0x7754($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4240) {
            ctx->pc = 0x2D43FCu;
            goto label_2d43fc;
        }
    }
    ctx->pc = 0x2D4248u;
label_2d4248:
    // 0x2d4248: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2d4248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2d424c:
    // 0x2d424c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_2d4250:
    if (ctx->pc == 0x2D4250u) {
        ctx->pc = 0x2D4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D424Cu;
        // 0x2d4250: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4254u;
        goto label_2d4254;
    }
    ctx->pc = 0x2D424Cu;
    {
        const bool branch_taken_0x2d424c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D424Cu;
        // 0x2d4250: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d424c) {
            ctx->pc = 0x2D425Cu;
            goto label_2d425c;
        }
    }
    ctx->pc = 0x2D4254u;
label_2d4254:
    // 0x2d4254: 0x1483009e  bne         $a0, $v1, . + 4 + (0x9E << 2)
label_2d4258:
    if (ctx->pc == 0x2D4258u) {
        ctx->pc = 0x2D4258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4254u;
        // 0x2d4258: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D425Cu;
        goto label_2d425c;
    }
    ctx->pc = 0x2D4254u;
    {
        const bool branch_taken_0x2d4254 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D4258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4254u;
        // 0x2d4258: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4254) {
            ctx->pc = 0x2D44D0u;
            goto label_2d44d0;
        }
    }
    ctx->pc = 0x2D425Cu;
label_2d425c:
    // 0x2d425c: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x2d425cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2d4260:
    // 0x2d4260: 0x1060009b  beqz        $v1, . + 4 + (0x9B << 2)
label_2d4264:
    if (ctx->pc == 0x2D4264u) {
        ctx->pc = 0x2D4264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4260u;
        // 0x2d4264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4268u;
        goto label_2d4268;
    }
    ctx->pc = 0x2D4260u;
    {
        const bool branch_taken_0x2d4260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4260u;
        // 0x2d4264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4260) {
            ctx->pc = 0x2D44D0u;
            goto label_2d44d0;
        }
    }
    ctx->pc = 0x2D4268u;
label_2d4268:
    // 0x2d4268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d4268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d426c:
    // 0x2d426c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2d4270:
    if (ctx->pc == 0x2D4270u) {
        ctx->pc = 0x2D4270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D426Cu;
        // 0x2d4270: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4274u;
        goto label_2d4274;
    }
    ctx->pc = 0x2D426Cu;
    {
        const bool branch_taken_0x2d426c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D426Cu;
        // 0x2d4270: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d426c) {
            ctx->pc = 0x2D4280u;
            goto label_2d4280;
        }
    }
    ctx->pc = 0x2D4274u;
label_2d4274:
    // 0x2d4274: 0x0  nop
    ctx->pc = 0x2d4274u;
    // NOP
label_2d4278:
    // 0x2d4278: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2d4278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2d427c:
    // 0x2d427c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d427cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d4280:
    // 0x2d4280: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_2d4284:
    if (ctx->pc == 0x2D4284u) {
        ctx->pc = 0x2D4284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4280u;
        // 0x2d4284: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4288u;
        goto label_2d4288;
    }
    ctx->pc = 0x2D4280u;
    {
        const bool branch_taken_0x2d4280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D4284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4280u;
        // 0x2d4284: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4280) {
            ctx->pc = 0x2D42A0u;
            goto label_2d42a0;
        }
    }
    ctx->pc = 0x2D4288u;
label_2d4288:
    // 0x2d4288: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2d4288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2d428c:
    // 0x2d428c: 0x10820018  beq         $a0, $v0, . + 4 + (0x18 << 2)
label_2d4290:
    if (ctx->pc == 0x2D4290u) {
        ctx->pc = 0x2D4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D428Cu;
        // 0x2d4290: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4294u;
        goto label_2d4294;
    }
    ctx->pc = 0x2D428Cu;
    {
        const bool branch_taken_0x2d428c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D428Cu;
        // 0x2d4290: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d428c) {
            ctx->pc = 0x2D42F0u;
            goto label_2d42f0;
        }
    }
    ctx->pc = 0x2D4294u;
label_2d4294:
    // 0x2d4294: 0x1000008f  b           . + 4 + (0x8F << 2)
label_2d4298:
    if (ctx->pc == 0x2D4298u) {
        ctx->pc = 0x2D4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4294u;
        // 0x2d4298: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D429Cu;
        goto label_2d429c;
    }
    ctx->pc = 0x2D4294u;
    {
        const bool branch_taken_0x2d4294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4294u;
        // 0x2d4298: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4294) {
            ctx->pc = 0x2D44D4u;
            goto label_2d44d4;
        }
    }
    ctx->pc = 0x2D429Cu;
label_2d429c:
    // 0x2d429c: 0x0  nop
    ctx->pc = 0x2d429cu;
    // NOP
label_2d42a0:
    // 0x2d42a0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2d42a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_2d42a4:
    // 0x2d42a4: 0x244743e0  addiu       $a3, $v0, 0x43E0
    ctx->pc = 0x2d42a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 17376));
label_2d42a8:
    // 0x2d42a8: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x2d42a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2d42ac:
    // 0x2d42ac: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x2d42acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2d42b0:
    // 0x2d42b0: 0xb20300a3  sdl         $v1, 0xA3($s0)
    ctx->pc = 0x2d42b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 163); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d42b4:
    // 0x2d42b4: 0xb603009c  sdr         $v1, 0x9C($s0)
    ctx->pc = 0x2d42b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 156); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d42b8:
    // 0x2d42b8: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x2d42b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
label_2d42bc:
    // 0x2d42bc: 0x248743e8  addiu       $a3, $a0, 0x43E8
    ctx->pc = 0x2d42bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 17384));
label_2d42c0:
    // 0x2d42c0: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x2d42c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2d42c4:
    // 0x2d42c4: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x2d42c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2d42c8:
    // 0x2d42c8: 0xb20200ab  sdl         $v0, 0xAB($s0)
    ctx->pc = 0x2d42c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 171); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d42cc:
    // 0x2d42cc: 0xb60200a4  sdr         $v0, 0xA4($s0)
    ctx->pc = 0x2d42ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 164); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d42d0:
    // 0x2d42d0: 0x246643f0  addiu       $a2, $v1, 0x43F0
    ctx->pc = 0x2d42d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 17392));
label_2d42d4:
    // 0x2d42d4: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2d42d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2d42d8:
    // 0x2d42d8: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2d42d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2d42dc:
    // 0x2d42dc: 0xb20200b3  sdl         $v0, 0xB3($s0)
    ctx->pc = 0x2d42dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 179); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d42e0:
    // 0x2d42e0: 0xb60200ac  sdr         $v0, 0xAC($s0)
    ctx->pc = 0x2d42e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 172); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d42e4:
    // 0x2d42e4: 0x10000015  b           . + 4 + (0x15 << 2)
label_2d42e8:
    if (ctx->pc == 0x2D42E8u) {
        ctx->pc = 0x2D42E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D42E4u;
        // 0x2d42e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D42ECu;
        goto label_2d42ec;
    }
    ctx->pc = 0x2D42E4u;
    {
        const bool branch_taken_0x2d42e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D42E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D42E4u;
        // 0x2d42e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d42e4) {
            ctx->pc = 0x2D433Cu;
            goto label_2d433c;
        }
    }
    ctx->pc = 0x2D42ECu;
label_2d42ec:
    // 0x2d42ec: 0x0  nop
    ctx->pc = 0x2d42ecu;
    // NOP
label_2d42f0:
    // 0x2d42f0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2d42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_2d42f4:
    // 0x2d42f4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2d42f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_2d42f8:
    // 0x2d42f8: 0x244643f8  addiu       $a2, $v0, 0x43F8
    ctx->pc = 0x2d42f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 17400));
label_2d42fc:
    // 0x2d42fc: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x2d42fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2d4300:
    // 0x2d4300: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x2d4300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2d4304:
    // 0x2d4304: 0xb20700a3  sdl         $a3, 0xA3($s0)
    ctx->pc = 0x2d4304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 163); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d4308:
    // 0x2d4308: 0xb607009c  sdr         $a3, 0x9C($s0)
    ctx->pc = 0x2d4308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 156); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d430c:
    // 0x2d430c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x2d430cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
label_2d4310:
    // 0x2d4310: 0x24864400  addiu       $a2, $a0, 0x4400
    ctx->pc = 0x2d4310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 17408));
label_2d4314:
    // 0x2d4314: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x2d4314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2d4318:
    // 0x2d4318: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x2d4318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2d431c:
    // 0x2d431c: 0xb20700ab  sdl         $a3, 0xAB($s0)
    ctx->pc = 0x2d431cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 171); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d4320:
    // 0x2d4320: 0xb60700a4  sdr         $a3, 0xA4($s0)
    ctx->pc = 0x2d4320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 164); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d4324:
    // 0x2d4324: 0x24654408  addiu       $a1, $v1, 0x4408
    ctx->pc = 0x2d4324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 17416));
label_2d4328:
    // 0x2d4328: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x2d4328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2d432c:
    // 0x2d432c: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x2d432cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2d4330:
    // 0x2d4330: 0xb20700b3  sdl         $a3, 0xB3($s0)
    ctx->pc = 0x2d4330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 179); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d4334:
    // 0x2d4334: 0xb60700ac  sdr         $a3, 0xAC($s0)
    ctx->pc = 0x2d4334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 172); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d4338:
    // 0x2d4338: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d4338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d433c:
    // 0x2d433c: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2d433cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_2d4340:
    // 0x2d4340: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2d4340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2d4344:
    // 0x2d4344: 0xc0cb7be  jal         func_32DEF8
label_2d4348:
    if (ctx->pc == 0x2D4348u) {
        ctx->pc = 0x2D4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4344u;
        // 0x2d4348: 0x24042fac  addiu       $a0, $zero, 0x2FAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12204));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D434Cu;
        goto label_2d434c;
    }
    ctx->pc = 0x2D4344u;
    SET_GPR_U32(ctx, 31, 0x2D434Cu);
    ctx->pc = 0x2D4348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4344u;
    // 0x2d4348: 0x24042fac  addiu       $a0, $zero, 0x2FAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEF8u, 0x2D4344u, 0x2D434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D434Cu;
label_2d434c:
    // 0x2d434c: 0x8604009e  lh          $a0, 0x9E($s0)
    ctx->pc = 0x2d434cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 158)));
label_2d4350:
    // 0x2d4350: 0x480000f  bltz        $a0, . + 4 + (0xF << 2)
label_2d4354:
    if (ctx->pc == 0x2D4354u) {
        ctx->pc = 0x2D4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4350u;
        // 0x2d4354: 0x9605009e  lhu         $a1, 0x9E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 158)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4358u;
        goto label_2d4358;
    }
    ctx->pc = 0x2D4350u;
    {
        const bool branch_taken_0x2d4350 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2D4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4350u;
        // 0x2d4354: 0x9605009e  lhu         $a1, 0x9E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 158)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4350) {
            ctx->pc = 0x2D4390u;
            goto label_2d4390;
        }
    }
    ctx->pc = 0x2D4358u;
label_2d4358:
    // 0x2d4358: 0x860300a0  lh          $v1, 0xA0($s0)
    ctx->pc = 0x2d4358u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
label_2d435c:
    // 0x2d435c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2d435cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2d4360:
    // 0x2d4360: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2d4360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2d4364:
    // 0x2d4364: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d4364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d4368:
    // 0x2d4368: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d4368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2d436c:
    // 0x2d436c: 0x6846ffff  ldl         $a2, -0x1($v0)
    ctx->pc = 0x2d436cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2d4370:
    // 0x2d4370: 0x6c46fff8  ldr         $a2, -0x8($v0)
    ctx->pc = 0x2d4370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2d4374:
    // 0x2d4374: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x2d4374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d4378:
    // 0x2d4378: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x2d4378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d437c:
    // 0x2d437c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d4380:
    // 0x2d4380: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2d4384:
    if (ctx->pc == 0x2D4384u) {
        ctx->pc = 0x2D4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4380u;
        // 0x2d4384: 0x51400  sll         $v0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4388u;
        goto label_2d4388;
    }
    ctx->pc = 0x2D4380u;
    {
        const bool branch_taken_0x2d4380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4380u;
        // 0x2d4384: 0x51400  sll         $v0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4380) {
            ctx->pc = 0x2D439Cu;
            goto label_2d439c;
        }
    }
    ctx->pc = 0x2D4388u;
label_2d4388:
    // 0x2d4388: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2d438c:
    if (ctx->pc == 0x2D438Cu) {
        ctx->pc = 0x2D438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4388u;
        // 0x2d438c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4390u;
        goto label_2d4390;
    }
    ctx->pc = 0x2D4388u;
    {
        const bool branch_taken_0x2d4388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4388u;
        // 0x2d438c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4388) {
            ctx->pc = 0x2D43F8u;
            goto label_2d43f8;
        }
    }
    ctx->pc = 0x2D4390u;
label_2d4390:
    // 0x2d4390: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x2d4390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_2d4394:
    // 0x2d4394: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2d4398:
    if (ctx->pc == 0x2D4398u) {
        ctx->pc = 0x2D4398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4394u;
        // 0x2d4398: 0x51400  sll         $v0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D439Cu;
        goto label_2d439c;
    }
    ctx->pc = 0x2D4394u;
    {
        const bool branch_taken_0x2d4394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4394u;
        // 0x2d4398: 0x51400  sll         $v0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4394) {
            ctx->pc = 0x2D43F4u;
            goto label_2d43f4;
        }
    }
    ctx->pc = 0x2D439Cu;
label_2d439c:
    // 0x2d439c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x2d439cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_2d43a0:
    // 0x2d43a0: 0x4a0000b  bltz        $a1, . + 4 + (0xB << 2)
label_2d43a4:
    if (ctx->pc == 0x2D43A4u) {
        ctx->pc = 0x2D43A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43A0u;
        // 0x2d43a4: 0x520c0  sll         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D43A8u;
        goto label_2d43a8;
    }
    ctx->pc = 0x2D43A0u;
    {
        const bool branch_taken_0x2d43a0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2D43A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43A0u;
        // 0x2d43a4: 0x520c0  sll         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d43a0) {
            ctx->pc = 0x2D43D0u;
            goto label_2d43d0;
        }
    }
    ctx->pc = 0x2D43A8u;
label_2d43a8:
    // 0x2d43a8: 0x860200a0  lh          $v0, 0xA0($s0)
    ctx->pc = 0x2d43a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
label_2d43ac:
    // 0x2d43ac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2d43acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2d43b0:
    // 0x2d43b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d43b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d43b4:
    // 0x2d43b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d43b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d43b8:
    // 0x2d43b8: 0x6866ffff  ldl         $a2, -0x1($v1)
    ctx->pc = 0x2d43b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2d43bc:
    // 0x2d43bc: 0x6c66fff8  ldr         $a2, -0x8($v1)
    ctx->pc = 0x2d43bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2d43c0:
    // 0x2d43c0: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x2d43c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d43c4:
    // 0x2d43c4: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x2d43c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d43c8:
    // 0x2d43c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2d43cc:
    if (ctx->pc == 0x2D43CCu) {
        ctx->pc = 0x2D43CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43C8u;
        // 0x2d43cc: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D43D0u;
        goto label_2d43d0;
    }
    ctx->pc = 0x2D43C8u;
    {
        const bool branch_taken_0x2d43c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D43CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43C8u;
        // 0x2d43cc: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d43c8) {
            ctx->pc = 0x2D43D4u;
            goto label_2d43d4;
        }
    }
    ctx->pc = 0x2D43D0u;
label_2d43d0:
    // 0x2d43d0: 0x8e0600a0  lw          $a2, 0xA0($s0)
    ctx->pc = 0x2d43d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_2d43d4:
    // 0x2d43d4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_2d43d8:
    if (ctx->pc == 0x2D43D8u) {
        ctx->pc = 0x2D43D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43D4u;
        // 0x2d43d8: 0x8603009c  lh          $v1, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D43DCu;
        goto label_2d43dc;
    }
    ctx->pc = 0x2D43D4u;
    {
        const bool branch_taken_0x2d43d4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2D43D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43D4u;
        // 0x2d43d8: 0x8603009c  lh          $v1, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d43d4) {
            ctx->pc = 0x2D43E8u;
            goto label_2d43e8;
        }
    }
    ctx->pc = 0x2D43DCu;
label_2d43dc:
    // 0x2d43dc: 0x87a20010  lh          $v0, 0x10($sp)
    ctx->pc = 0x2d43dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_2d43e0:
    // 0x2d43e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2d43e4:
    if (ctx->pc == 0x2D43E4u) {
        ctx->pc = 0x2D43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43E0u;
        // 0x2d43e4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D43E8u;
        goto label_2d43e8;
    }
    ctx->pc = 0x2D43E0u;
    {
        const bool branch_taken_0x2d43e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43E0u;
        // 0x2d43e4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d43e0) {
            ctx->pc = 0x2D43ECu;
            goto label_2d43ec;
        }
    }
    ctx->pc = 0x2D43E8u;
label_2d43e8:
    // 0x2d43e8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2d43e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d43ec:
    // 0x2d43ec: 0xc0f809  jalr        $a2
label_2d43f0:
    if (ctx->pc == 0x2D43F0u) {
        ctx->pc = 0x2D43F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43ECu;
        // 0x2d43f0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D43F4u;
        goto label_2d43f4;
    }
    ctx->pc = 0x2D43ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2D43F4u);
        ctx->pc = 0x2D43F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43ECu;
        // 0x2d43f0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D43ECu, 0x2D43F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D43F4u;
label_2d43f4:
    // 0x2d43f4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2d43f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_2d43f8:
    // 0x2d43f8: 0x8c8388ac  lw          $v1, -0x7754($a0)
    ctx->pc = 0x2d43f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936748)));
label_2d43fc:
    // 0x2d43fc: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_2d4400:
    if (ctx->pc == 0x2D4400u) {
        ctx->pc = 0x2D4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43FCu;
        // 0x2d4400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4404u;
        goto label_2d4404;
    }
    ctx->pc = 0x2D43FCu;
    {
        const bool branch_taken_0x2d43fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43FCu;
        // 0x2d4400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d43fc) {
            ctx->pc = 0x2D44D0u;
            goto label_2d44d0;
        }
    }
    ctx->pc = 0x2D4404u;
label_2d4404:
    // 0x2d4404: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2d4404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2d4408:
    // 0x2d4408: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x2d4408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2d440c:
    // 0x2d440c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d440cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2d4410:
    // 0x2d4410: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_2d4414:
    if (ctx->pc == 0x2D4414u) {
        ctx->pc = 0x2D4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4410u;
        // 0x2d4414: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4418u;
        goto label_2d4418;
    }
    ctx->pc = 0x2D4410u;
    {
        const bool branch_taken_0x2d4410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4410u;
        // 0x2d4414: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4410) {
            ctx->pc = 0x2D44CCu;
            goto label_2d44cc;
        }
    }
    ctx->pc = 0x2D4418u;
label_2d4418:
    // 0x2d4418: 0x3c11003e  lui         $s1, 0x3E
    ctx->pc = 0x2d4418u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)62 << 16));
label_2d441c:
    // 0x2d441c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d441cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4420:
    // 0x2d4420: 0xc0b7d04  jal         func_2DF410
label_2d4424:
    if (ctx->pc == 0x2D4424u) {
        ctx->pc = 0x2D4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4420u;
        // 0x2d4424: 0x262437e0  addiu       $a0, $s1, 0x37E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4428u;
        goto label_2d4428;
    }
    ctx->pc = 0x2D4420u;
    SET_GPR_U32(ctx, 31, 0x2D4428u);
    ctx->pc = 0x2D4424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4420u;
    // 0x2d4424: 0x262437e0  addiu       $a0, $s1, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2D4420u, 0x2D4428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4428u;
label_2d4428:
    // 0x2d4428: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2d4428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2d442c:
    // 0x2d442c: 0xc0b772c  jal         func_2DDCB0
label_2d4430:
    if (ctx->pc == 0x2D4430u) {
        ctx->pc = 0x2D4430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D442Cu;
        // 0x2d4430: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4434u;
        goto label_2d4434;
    }
    ctx->pc = 0x2D442Cu;
    SET_GPR_U32(ctx, 31, 0x2D4434u);
    ctx->pc = 0x2D4430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D442Cu;
    // 0x2d4430: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDCB0u, 0x2D442Cu, 0x2D4434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4434u;
label_2d4434:
    // 0x2d4434: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2d4434u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2d4438:
    // 0x2d4438: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2d4438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2d443c:
    // 0x2d443c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d443cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d4440:
    // 0x2d4440: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d4440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d4444:
    // 0x2d4444: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2d4448:
    if (ctx->pc == 0x2D4448u) {
        ctx->pc = 0x2D4448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4444u;
        // 0x2d4448: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D444Cu;
        goto label_2d444c;
    }
    ctx->pc = 0x2D4444u;
    {
        const bool branch_taken_0x2d4444 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d4444) {
            ctx->pc = 0x2D4448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4444u;
            // 0x2d4448: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D444Cu;
            goto label_2d444c;
        }
    }
    ctx->pc = 0x2D444Cu;
label_2d444c:
    // 0x2d444c: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x2d444cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d4450:
    // 0x2d4450: 0x860500a6  lh          $a1, 0xA6($s0)
    ctx->pc = 0x2d4450u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 166)));
label_2d4454:
    // 0x2d4454: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d4454u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2d4458:
    // 0x2d4458: 0x4a0000d  bltz        $a1, . + 4 + (0xD << 2)
label_2d445c:
    if (ctx->pc == 0x2D445Cu) {
        ctx->pc = 0x2D445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4458u;
        // 0x2d445c: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4460u;
        goto label_2d4460;
    }
    ctx->pc = 0x2D4458u;
    {
        const bool branch_taken_0x2d4458 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2D445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4458u;
        // 0x2d445c: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4458) {
            ctx->pc = 0x2D4490u;
            goto label_2d4490;
        }
    }
    ctx->pc = 0x2D4460u;
label_2d4460:
    // 0x2d4460: 0x860200a8  lh          $v0, 0xA8($s0)
    ctx->pc = 0x2d4460u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
label_2d4464:
    // 0x2d4464: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2d4464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2d4468:
    // 0x2d4468: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2d4468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2d446c:
    // 0x2d446c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d446cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d4470:
    // 0x2d4470: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d4470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d4474:
    // 0x2d4474: 0x6866ffff  ldl         $a2, -0x1($v1)
    ctx->pc = 0x2d4474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2d4478:
    // 0x2d4478: 0x6c66fff8  ldr         $a2, -0x8($v1)
    ctx->pc = 0x2d4478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2d447c:
    // 0x2d447c: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x2d447cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d4480:
    // 0x2d4480: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x2d4480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d4484:
    // 0x2d4484: 0x10000003  b           . + 4 + (0x3 << 2)
label_2d4488:
    if (ctx->pc == 0x2D4488u) {
        ctx->pc = 0x2D4488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4484u;
        // 0x2d4488: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D448Cu;
        goto label_2d448c;
    }
    ctx->pc = 0x2D4484u;
    {
        const bool branch_taken_0x2d4484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4484u;
        // 0x2d4488: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4484) {
            ctx->pc = 0x2D4494u;
            goto label_2d4494;
        }
    }
    ctx->pc = 0x2D448Cu;
label_2d448c:
    // 0x2d448c: 0x0  nop
    ctx->pc = 0x2d448cu;
    // NOP
label_2d4490:
    // 0x2d4490: 0x8e0600a8  lw          $a2, 0xA8($s0)
    ctx->pc = 0x2d4490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_2d4494:
    // 0x2d4494: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_2d4498:
    if (ctx->pc == 0x2D4498u) {
        ctx->pc = 0x2D4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4494u;
        // 0x2d4498: 0x860300a4  lh          $v1, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D449Cu;
        goto label_2d449c;
    }
    ctx->pc = 0x2D4494u;
    {
        const bool branch_taken_0x2d4494 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2D4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4494u;
        // 0x2d4498: 0x860300a4  lh          $v1, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4494) {
            ctx->pc = 0x2D44A8u;
            goto label_2d44a8;
        }
    }
    ctx->pc = 0x2D449Cu;
label_2d449c:
    // 0x2d449c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2d449cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_2d44a0:
    // 0x2d44a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2d44a4:
    if (ctx->pc == 0x2D44A4u) {
        ctx->pc = 0x2D44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44A0u;
        // 0x2d44a4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D44A8u;
        goto label_2d44a8;
    }
    ctx->pc = 0x2D44A0u;
    {
        const bool branch_taken_0x2d44a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44A0u;
        // 0x2d44a4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d44a0) {
            ctx->pc = 0x2D44ACu;
            goto label_2d44ac;
        }
    }
    ctx->pc = 0x2D44A8u;
label_2d44a8:
    // 0x2d44a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2d44a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d44ac:
    // 0x2d44ac: 0xc0f809  jalr        $a2
label_2d44b0:
    if (ctx->pc == 0x2D44B0u) {
        ctx->pc = 0x2D44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44ACu;
        // 0x2d44b0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D44B4u;
        goto label_2d44b4;
    }
    ctx->pc = 0x2D44ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2D44B4u);
        ctx->pc = 0x2D44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44ACu;
        // 0x2d44b0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D44ACu, 0x2D44B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D44B4u;
label_2d44b4:
    // 0x2d44b4: 0x262437e0  addiu       $a0, $s1, 0x37E0
    ctx->pc = 0x2d44b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14304));
label_2d44b8:
    // 0x2d44b8: 0xc0b7d04  jal         func_2DF410
label_2d44bc:
    if (ctx->pc == 0x2D44BCu) {
        ctx->pc = 0x2D44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44B8u;
        // 0x2d44bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D44C0u;
        goto label_2d44c0;
    }
    ctx->pc = 0x2D44B8u;
    SET_GPR_U32(ctx, 31, 0x2D44C0u);
    ctx->pc = 0x2D44BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D44B8u;
    // 0x2d44bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2D44B8u, 0x2D44C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D44C0u;
label_2d44c0:
    // 0x2d44c0: 0xc0b7700  jal         func_2DDC00
label_2d44c4:
    if (ctx->pc == 0x2D44C4u) {
        ctx->pc = 0x2D44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44C0u;
        // 0x2d44c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D44C8u;
        goto label_2d44c8;
    }
    ctx->pc = 0x2D44C0u;
    SET_GPR_U32(ctx, 31, 0x2D44C8u);
    ctx->pc = 0x2D44C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D44C0u;
    // 0x2d44c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDC00u, 0x2D44C0u, 0x2D44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D44C8u;
label_2d44c8:
    // 0x2d44c8: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2d44c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_2d44cc:
    // 0x2d44cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d44ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d44d0:
    // 0x2d44d0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d44d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d44d4:
    // 0x2d44d4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2d44d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d44d8:
    // 0x2d44d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d44d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d44dc:
    // 0x2d44dc: 0x3e00008  jr          $ra
label_2d44e0:
    if (ctx->pc == 0x2D44E0u) {
        ctx->pc = 0x2D44E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44DCu;
        // 0x2d44e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D44E4u;
        goto label_2d44e4;
    }
    ctx->pc = 0x2D44DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D44E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44DCu;
        // 0x2d44e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D44DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D44E4u;
label_2d44e4:
    // 0x2d44e4: 0x0  nop
    ctx->pc = 0x2d44e4u;
    // NOP
    ctx->pc = 0x2d44e8u;
}
