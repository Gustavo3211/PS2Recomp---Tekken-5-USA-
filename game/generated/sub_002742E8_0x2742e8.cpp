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

// Function: sub_002742E8
// Address: 0x2742e8 - 0x2743e8
void sub_002742E8_0x2742e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002742E8_0x2742e8");
#endif

    switch (ctx->pc) {
        case 0x2742e8u: goto label_2742e8;
        case 0x2742ecu: goto label_2742ec;
        case 0x2742f0u: goto label_2742f0;
        case 0x2742f4u: goto label_2742f4;
        case 0x2742f8u: goto label_2742f8;
        case 0x2742fcu: goto label_2742fc;
        case 0x274300u: goto label_274300;
        case 0x274304u: goto label_274304;
        case 0x274308u: goto label_274308;
        case 0x27430cu: goto label_27430c;
        case 0x274310u: goto label_274310;
        case 0x274314u: goto label_274314;
        case 0x274318u: goto label_274318;
        case 0x27431cu: goto label_27431c;
        case 0x274320u: goto label_274320;
        case 0x274324u: goto label_274324;
        case 0x274328u: goto label_274328;
        case 0x27432cu: goto label_27432c;
        case 0x274330u: goto label_274330;
        case 0x274334u: goto label_274334;
        case 0x274338u: goto label_274338;
        case 0x27433cu: goto label_27433c;
        case 0x274340u: goto label_274340;
        case 0x274344u: goto label_274344;
        case 0x274348u: goto label_274348;
        case 0x27434cu: goto label_27434c;
        case 0x274350u: goto label_274350;
        case 0x274354u: goto label_274354;
        case 0x274358u: goto label_274358;
        case 0x27435cu: goto label_27435c;
        case 0x274360u: goto label_274360;
        case 0x274364u: goto label_274364;
        case 0x274368u: goto label_274368;
        case 0x27436cu: goto label_27436c;
        case 0x274370u: goto label_274370;
        case 0x274374u: goto label_274374;
        case 0x274378u: goto label_274378;
        case 0x27437cu: goto label_27437c;
        case 0x274380u: goto label_274380;
        case 0x274384u: goto label_274384;
        case 0x274388u: goto label_274388;
        case 0x27438cu: goto label_27438c;
        case 0x274390u: goto label_274390;
        case 0x274394u: goto label_274394;
        case 0x274398u: goto label_274398;
        case 0x27439cu: goto label_27439c;
        case 0x2743a0u: goto label_2743a0;
        case 0x2743a4u: goto label_2743a4;
        case 0x2743a8u: goto label_2743a8;
        case 0x2743acu: goto label_2743ac;
        case 0x2743b0u: goto label_2743b0;
        case 0x2743b4u: goto label_2743b4;
        case 0x2743b8u: goto label_2743b8;
        case 0x2743bcu: goto label_2743bc;
        case 0x2743c0u: goto label_2743c0;
        case 0x2743c4u: goto label_2743c4;
        case 0x2743c8u: goto label_2743c8;
        case 0x2743ccu: goto label_2743cc;
        case 0x2743d0u: goto label_2743d0;
        case 0x2743d4u: goto label_2743d4;
        case 0x2743d8u: goto label_2743d8;
        case 0x2743dcu: goto label_2743dc;
        case 0x2743e0u: goto label_2743e0;
        case 0x2743e4u: goto label_2743e4;
        default: break;
    }

    ctx->pc = 0x2742e8u;

label_2742e8:
    // 0x2742e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2742e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2742ec:
    // 0x2742ec: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2742ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_2742f0:
    // 0x2742f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2742f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2742f4:
    // 0x2742f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2742f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2742f8:
    // 0x2742f8: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x2742f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_2742fc:
    // 0x2742fc: 0x4410034  bgez        $v0, . + 4 + (0x34 << 2)
label_274300:
    if (ctx->pc == 0x274300u) {
        ctx->pc = 0x274300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742FCu;
        // 0x274300: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274304u;
        goto label_274304;
    }
    ctx->pc = 0x2742FCu;
    {
        const bool branch_taken_0x2742fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x274300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742FCu;
        // 0x274300: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2742fc) {
            ctx->pc = 0x2743D0u;
            goto label_2743d0;
        }
    }
    ctx->pc = 0x274304u;
label_274304:
    // 0x274304: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x274304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_274308:
    // 0x274308: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_27430c:
    if (ctx->pc == 0x27430Cu) {
        ctx->pc = 0x27430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274308u;
        // 0x27430c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274310u;
        goto label_274310;
    }
    ctx->pc = 0x274308u;
    {
        const bool branch_taken_0x274308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274308u;
        // 0x27430c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274308) {
            ctx->pc = 0x2743D4u;
            goto label_2743d4;
        }
    }
    ctx->pc = 0x274310u;
label_274310:
    // 0x274310: 0xc04a1f0  jal         func_1287C0
label_274314:
    if (ctx->pc == 0x274314u) {
        ctx->pc = 0x274318u;
        goto label_274318;
    }
    ctx->pc = 0x274310u;
    SET_GPR_U32(ctx, 31, 0x274318u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x274310u, 0x274318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274318u;
label_274318:
    // 0x274318: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x274318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_27431c:
    // 0x27431c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27431cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_274320:
    // 0x274320: 0x84830374  lh          $v1, 0x374($a0)
    ctx->pc = 0x274320u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 884)));
label_274324:
    // 0x274324: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x274324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_274328:
    // 0x274328: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_27432c:
    if (ctx->pc == 0x27432Cu) {
        ctx->pc = 0x27432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274328u;
        // 0x27432c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274330u;
        goto label_274330;
    }
    ctx->pc = 0x274328u;
    {
        const bool branch_taken_0x274328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274328u;
        // 0x27432c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274328) {
            ctx->pc = 0x2743D4u;
            goto label_2743d4;
        }
    }
    ctx->pc = 0x274330u;
label_274330:
    // 0x274330: 0x8c8200ac  lw          $v0, 0xAC($a0)
    ctx->pc = 0x274330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_274334:
    // 0x274334: 0x40f809  jalr        $v0
label_274338:
    if (ctx->pc == 0x274338u) {
        ctx->pc = 0x27433Cu;
        goto label_27433c;
    }
    ctx->pc = 0x274334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27433Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274334u, 0x27433Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27433Cu;
label_27433c:
    // 0x27433c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27433cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_274340:
    // 0x274340: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x274340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_274344:
    // 0x274344: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_274348:
    if (ctx->pc == 0x274348u) {
        ctx->pc = 0x274348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274344u;
        // 0x274348: 0x2862ffff  slti        $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27434Cu;
        goto label_27434c;
    }
    ctx->pc = 0x274344u;
    {
        const bool branch_taken_0x274344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x274348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274344u;
        // 0x274348: 0x2862ffff  slti        $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274344) {
            ctx->pc = 0x2743CCu;
            goto label_2743cc;
        }
    }
    ctx->pc = 0x27434Cu;
label_27434c:
    // 0x27434c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_274350:
    if (ctx->pc == 0x274350u) {
        ctx->pc = 0x274350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27434Cu;
        // 0x274350: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274354u;
        goto label_274354;
    }
    ctx->pc = 0x27434Cu;
    {
        const bool branch_taken_0x27434c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27434Cu;
        // 0x274350: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27434c) {
            ctx->pc = 0x274368u;
            goto label_274368;
        }
    }
    ctx->pc = 0x274354u;
label_274354:
    // 0x274354: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x274354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_274358:
    // 0x274358: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_27435c:
    if (ctx->pc == 0x27435Cu) {
        ctx->pc = 0x27435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274358u;
        // 0x27435c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274360u;
        goto label_274360;
    }
    ctx->pc = 0x274358u;
    {
        const bool branch_taken_0x274358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274358u;
        // 0x27435c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274358) {
            ctx->pc = 0x274378u;
            goto label_274378;
        }
    }
    ctx->pc = 0x274360u;
label_274360:
    // 0x274360: 0x1000000f  b           . + 4 + (0xF << 2)
label_274364:
    if (ctx->pc == 0x274364u) {
        ctx->pc = 0x274368u;
        goto label_274368;
    }
    ctx->pc = 0x274360u;
    {
        const bool branch_taken_0x274360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274360) {
            ctx->pc = 0x2743A0u;
            goto label_2743a0;
        }
    }
    ctx->pc = 0x274368u;
label_274368:
    // 0x274368: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_27436c:
    if (ctx->pc == 0x27436Cu) {
        ctx->pc = 0x27436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274368u;
        // 0x27436c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274370u;
        goto label_274370;
    }
    ctx->pc = 0x274368u;
    {
        const bool branch_taken_0x274368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274368u;
        // 0x27436c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274368) {
            ctx->pc = 0x2743D0u;
            goto label_2743d0;
        }
    }
    ctx->pc = 0x274370u;
label_274370:
    // 0x274370: 0x1000000b  b           . + 4 + (0xB << 2)
label_274374:
    if (ctx->pc == 0x274374u) {
        ctx->pc = 0x274378u;
        goto label_274378;
    }
    ctx->pc = 0x274370u;
    {
        const bool branch_taken_0x274370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274370) {
            ctx->pc = 0x2743A0u;
            goto label_2743a0;
        }
    }
    ctx->pc = 0x274378u;
label_274378:
    // 0x274378: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x274378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_27437c:
    // 0x27437c: 0x8c4300a8  lw          $v1, 0xA8($v0)
    ctx->pc = 0x27437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_274380:
    // 0x274380: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
label_274384:
    if (ctx->pc == 0x274384u) {
        ctx->pc = 0x274384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274380u;
        // 0x274384: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274388u;
        goto label_274388;
    }
    ctx->pc = 0x274380u;
    {
        const bool branch_taken_0x274380 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x274384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274380u;
        // 0x274384: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274380) {
            ctx->pc = 0x2743D4u;
            goto label_2743d4;
        }
    }
    ctx->pc = 0x274388u;
label_274388:
    // 0x274388: 0xc09b492  jal         func_26D248
label_27438c:
    if (ctx->pc == 0x27438Cu) {
        ctx->pc = 0x274390u;
        goto label_274390;
    }
    ctx->pc = 0x274388u;
    SET_GPR_U32(ctx, 31, 0x274390u);
    ctx->pc = 0x26D248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D248u, 0x274388u, 0x274390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274390u;
label_274390:
    // 0x274390: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
label_274394:
    if (ctx->pc == 0x274394u) {
        ctx->pc = 0x274394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274390u;
        // 0x274394: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274398u;
        goto label_274398;
    }
    ctx->pc = 0x274390u;
    {
        const bool branch_taken_0x274390 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x274394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274390u;
        // 0x274394: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274390) {
            ctx->pc = 0x2743D4u;
            goto label_2743d4;
        }
    }
    ctx->pc = 0x274398u;
label_274398:
    // 0x274398: 0x1000000d  b           . + 4 + (0xD << 2)
label_27439c:
    if (ctx->pc == 0x27439Cu) {
        ctx->pc = 0x27439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274398u;
        // 0x27439c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2743A0u;
        goto label_2743a0;
    }
    ctx->pc = 0x274398u;
    {
        const bool branch_taken_0x274398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274398u;
        // 0x27439c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274398) {
            ctx->pc = 0x2743D0u;
            goto label_2743d0;
        }
    }
    ctx->pc = 0x2743A0u;
label_2743a0:
    // 0x2743a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2743a4:
    if (ctx->pc == 0x2743A4u) {
        ctx->pc = 0x2743A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743A0u;
        // 0x2743a4: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2743A8u;
        goto label_2743a8;
    }
    ctx->pc = 0x2743A0u;
    {
        const bool branch_taken_0x2743a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2743A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743A0u;
        // 0x2743a4: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2743a0) {
            ctx->pc = 0x2743B0u;
            goto label_2743b0;
        }
    }
    ctx->pc = 0x2743A8u;
label_2743a8:
    // 0x2743a8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2743ac:
    if (ctx->pc == 0x2743ACu) {
        ctx->pc = 0x2743ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743A8u;
        // 0x2743ac: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2743B0u;
        goto label_2743b0;
    }
    ctx->pc = 0x2743A8u;
    {
        const bool branch_taken_0x2743a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2743ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743A8u;
        // 0x2743ac: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2743a8) {
            ctx->pc = 0x2743C8u;
            goto label_2743c8;
        }
    }
    ctx->pc = 0x2743B0u;
label_2743b0:
    // 0x2743b0: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2743b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_2743b4:
    // 0x2743b4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2743b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2743b8:
    // 0x2743b8: 0xc09935e  jal         func_264D78
label_2743bc:
    if (ctx->pc == 0x2743BCu) {
        ctx->pc = 0x2743BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743B8u;
        // 0x2743bc: 0xa4430006  sh          $v1, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2743C0u;
        goto label_2743c0;
    }
    ctx->pc = 0x2743B8u;
    SET_GPR_U32(ctx, 31, 0x2743C0u);
    ctx->pc = 0x2743BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2743B8u;
    // 0x2743bc: 0xa4430006  sh          $v1, 0x6($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264D78u, 0x2743B8u, 0x2743C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2743C0u;
label_2743c0:
    // 0x2743c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2743c4:
    if (ctx->pc == 0x2743C4u) {
        ctx->pc = 0x2743C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743C0u;
        // 0x2743c4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2743C8u;
        goto label_2743c8;
    }
    ctx->pc = 0x2743C0u;
    {
        const bool branch_taken_0x2743c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2743C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743C0u;
        // 0x2743c4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2743c0) {
            ctx->pc = 0x2743D0u;
            goto label_2743d0;
        }
    }
    ctx->pc = 0x2743C8u;
label_2743c8:
    // 0x2743c8: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x2743c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
label_2743cc:
    // 0x2743cc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2743ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2743d0:
    // 0x2743d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2743d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2743d4:
    // 0x2743d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2743d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2743d8:
    // 0x2743d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2743d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2743dc:
    // 0x2743dc: 0x3e00008  jr          $ra
label_2743e0:
    if (ctx->pc == 0x2743E0u) {
        ctx->pc = 0x2743E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743DCu;
        // 0x2743e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2743E4u;
        goto label_2743e4;
    }
    ctx->pc = 0x2743DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2743E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743DCu;
        // 0x2743e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2743DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2743E4u;
label_2743e4:
    // 0x2743e4: 0x0  nop
    ctx->pc = 0x2743e4u;
    // NOP
    ctx->pc = 0x2743e8u;
}
