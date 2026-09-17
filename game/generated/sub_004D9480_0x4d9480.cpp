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

// Function: sub_004D9480
// Address: 0x4d9480 - 0x4d9508
void sub_004D9480_0x4d9480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D9480_0x4d9480");
#endif

    switch (ctx->pc) {
        case 0x4d9480u: goto label_4d9480;
        case 0x4d9484u: goto label_4d9484;
        case 0x4d9488u: goto label_4d9488;
        case 0x4d948cu: goto label_4d948c;
        case 0x4d9490u: goto label_4d9490;
        case 0x4d9494u: goto label_4d9494;
        case 0x4d9498u: goto label_4d9498;
        case 0x4d949cu: goto label_4d949c;
        case 0x4d94a0u: goto label_4d94a0;
        case 0x4d94a4u: goto label_4d94a4;
        case 0x4d94a8u: goto label_4d94a8;
        case 0x4d94acu: goto label_4d94ac;
        case 0x4d94b0u: goto label_4d94b0;
        case 0x4d94b4u: goto label_4d94b4;
        case 0x4d94b8u: goto label_4d94b8;
        case 0x4d94bcu: goto label_4d94bc;
        case 0x4d94c0u: goto label_4d94c0;
        case 0x4d94c4u: goto label_4d94c4;
        case 0x4d94c8u: goto label_4d94c8;
        case 0x4d94ccu: goto label_4d94cc;
        case 0x4d94d0u: goto label_4d94d0;
        case 0x4d94d4u: goto label_4d94d4;
        case 0x4d94d8u: goto label_4d94d8;
        case 0x4d94dcu: goto label_4d94dc;
        case 0x4d94e0u: goto label_4d94e0;
        case 0x4d94e4u: goto label_4d94e4;
        case 0x4d94e8u: goto label_4d94e8;
        case 0x4d94ecu: goto label_4d94ec;
        case 0x4d94f0u: goto label_4d94f0;
        case 0x4d94f4u: goto label_4d94f4;
        case 0x4d94f8u: goto label_4d94f8;
        case 0x4d94fcu: goto label_4d94fc;
        case 0x4d9500u: goto label_4d9500;
        case 0x4d9504u: goto label_4d9504;
        default: break;
    }

    ctx->pc = 0x4d9480u;

label_4d9480:
    // 0x4d9480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d9480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d9484:
    // 0x4d9484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d9484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d9488:
    // 0x4d9488: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d9488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d948c:
    // 0x4d948c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d948cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d9490:
    // 0x4d9490: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d9490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d9494:
    // 0x4d9494: 0xc1232f2  jal         func_48CBC8
label_4d9498:
    if (ctx->pc == 0x4D9498u) {
        ctx->pc = 0x4D9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9494u;
        // 0x4d9498: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D949Cu;
        goto label_4d949c;
    }
    ctx->pc = 0x4D9494u;
    SET_GPR_U32(ctx, 31, 0x4D949Cu);
    ctx->pc = 0x4D9498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9494u;
    // 0x4d9498: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4D9494u, 0x4D949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D949Cu;
label_4d949c:
    // 0x4d949c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d949cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4d94a0:
    // 0x4d94a0: 0xac62111c  sw          $v0, 0x111C($v1)
    ctx->pc = 0x4d94a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4380), GPR_U32(ctx, 2));
label_4d94a4:
    // 0x4d94a4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d94a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d94a8:
    // 0x4d94a8: 0x442000b  bltzl       $v0, . + 4 + (0xB << 2)
label_4d94ac:
    if (ctx->pc == 0x4D94ACu) {
        ctx->pc = 0x4D94ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D94A8u;
        // 0x4d94ac: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D94B0u;
        goto label_4d94b0;
    }
    ctx->pc = 0x4D94A8u;
    {
        const bool branch_taken_0x4d94a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4d94a8) {
            ctx->pc = 0x4D94ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D94A8u;
            // 0x4d94ac: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D94D8u;
            goto label_4d94d8;
        }
    }
    ctx->pc = 0x4D94B0u;
label_4d94b0:
    // 0x4d94b0: 0xc12b642  jal         func_4AD908
label_4d94b4:
    if (ctx->pc == 0x4D94B4u) {
        ctx->pc = 0x4D94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D94B0u;
        // 0x4d94b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D94B8u;
        goto label_4d94b8;
    }
    ctx->pc = 0x4D94B0u;
    SET_GPR_U32(ctx, 31, 0x4D94B8u);
    ctx->pc = 0x4D94B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D94B0u;
    // 0x4d94b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4D94B0u, 0x4D94B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D94B8u;
label_4d94b8:
    // 0x4d94b8: 0xa600016a  sh          $zero, 0x16A($s0)
    ctx->pc = 0x4d94b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 362), (uint16_t)GPR_U32(ctx, 0));
label_4d94bc:
    // 0x4d94bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4d94bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4d94c0:
    // 0x4d94c0: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4d94c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
label_4d94c4:
    // 0x4d94c4: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x4d94c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
label_4d94c8:
    // 0x4d94c8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d94c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d94cc:
    // 0x4d94cc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d94ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4d94d0:
    // 0x4d94d0: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4d94d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d94d4:
    // 0x4d94d4: 0x960201bc  lhu         $v0, 0x1BC($s0)
    ctx->pc = 0x4d94d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4d94d8:
    // 0x4d94d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d94dc:
    // 0x4d94dc: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d94dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4d94e0:
    // 0x4d94e0: 0x2c43000b  sltiu       $v1, $v0, 0xB
    ctx->pc = 0x4d94e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_4d94e4:
    // 0x4d94e4: 0x5060004a  beql        $v1, $zero, . + 4 + (0x4A << 2)
label_4d94e8:
    if (ctx->pc == 0x4D94E8u) {
        ctx->pc = 0x4D94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D94E4u;
        // 0x4d94e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D94ECu;
        goto label_4d94ec;
    }
    ctx->pc = 0x4D94E4u;
    {
        const bool branch_taken_0x4d94e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d94e4) {
            ctx->pc = 0x4D94E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D94E4u;
            // 0x4d94e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9610u;
            return;
        }
    }
    ctx->pc = 0x4D94ECu;
label_4d94ec:
    // 0x4d94ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d94ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4d94f0:
    // 0x4d94f0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4d94f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4d94f4:
    // 0x4d94f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d94f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4d94f8:
    // 0x4d94f8: 0x8c63b8a0  lw          $v1, -0x4760($v1)
    ctx->pc = 0x4d94f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949024)));
label_4d94fc:
    // 0x4d94fc: 0x600008  jr          $v1
label_4d9500:
    if (ctx->pc == 0x4D9500u) {
        ctx->pc = 0x4D9504u;
        goto label_4d9504;
    }
    ctx->pc = 0x4D94FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D94FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4D9504u;
label_4d9504:
    // 0x4d9504: 0x0  nop
    ctx->pc = 0x4d9504u;
    // NOP
    ctx->pc = 0x4d9508u;
}
