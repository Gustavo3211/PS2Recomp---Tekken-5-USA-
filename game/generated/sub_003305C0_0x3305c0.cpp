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

// Function: sub_003305C0
// Address: 0x3305c0 - 0x330660
void sub_003305C0_0x3305c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003305C0_0x3305c0");
#endif

    switch (ctx->pc) {
        case 0x3305f0u: goto label_3305f0;
        default: break;
    }

    ctx->pc = 0x3305c0u;

    // 0x3305c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3305c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3305c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3305c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3305c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3305c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3305cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3305ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3305d0: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x3305d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x3305d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3305d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3305d8: 0x26420400  addiu       $v0, $s2, 0x400
    ctx->pc = 0x3305d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x3305dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3305dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3305e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3305e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3305e4: 0x8c510014  lw          $s1, 0x14($v0)
    ctx->pc = 0x3305e4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x400414u));
    // 0x3305e8: 0xc0cd5c2  jal         func_335708
    ctx->pc = 0x3305E8u;
    SET_GPR_U32(ctx, 31, 0x3305F0u);
    ctx->pc = 0x3305ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3305E8u;
    // 0x3305ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335708u, 0x3305E8u, 0x3305F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3305F0u;
label_3305f0:
    // 0x3305f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3305f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3305f4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x3305f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x3305f8: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x3305f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x3305fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3305fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x330600: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x330600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x330604: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x330604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x330608: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x330608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x33060c: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x33060cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x330610: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x330610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x330614: 0x16040004  bne         $s0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x330614u;
    {
        const bool branch_taken_0x330614 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x330618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330614u;
        // 0x330618: 0x2183c  dsll32      $v1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330614) {
            ctx->pc = 0x330628u;
            goto label_330628;
        }
    }
    ctx->pc = 0x33061Cu;
    // 0x33061c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x33061cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x330620: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x330620u;
    {
        const bool branch_taken_0x330620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330620u;
        // 0x330624: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330620) {
            ctx->pc = 0x330630u;
            goto label_330630;
        }
    }
    ctx->pc = 0x330628u;
label_330628:
    // 0x330628: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x330628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x33062c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x33062cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_330630:
    // 0x330630: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x330630u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x330634: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x330634u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x330638: 0x26430400  addiu       $v1, $s2, 0x400
    ctx->pc = 0x330638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x33063c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33063cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330640: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x330640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x330644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330648: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x330648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x33064c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33064cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330650: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x330650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x330654: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x330654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x330658: 0x3e00008  jr          $ra
    ctx->pc = 0x330658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330658u;
        // 0x33065c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330660u;
}
