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

// Function: sub_003225D8
// Address: 0x3225d8 - 0x322750
void sub_003225D8_0x3225d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003225D8_0x3225d8");
#endif

    switch (ctx->pc) {
        case 0x322600u: goto label_322600;
        case 0x322690u: goto label_322690;
        case 0x3226c4u: goto label_3226c4;
        default: break;
    }

    ctx->pc = 0x3225d8u;

    // 0x3225d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3225d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3225dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3225dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3225e0: 0x24900024  addiu       $s0, $a0, 0x24
    ctx->pc = 0x3225e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x3225e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3225e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3225e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3225e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3225ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3225ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3225f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3225f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3225f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3225f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3225f8: 0xc0c8a88  jal         func_322A20
    ctx->pc = 0x3225F8u;
    SET_GPR_U32(ctx, 31, 0x322600u);
    ctx->pc = 0x3225FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3225F8u;
    // 0x3225fc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322A20u, 0x3225F8u, 0x322600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322600u;
label_322600:
    // 0x322600: 0x3c076c03  lui         $a3, 0x6C03
    ctx->pc = 0x322600u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27651 << 16));
    // 0x322604: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x322604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x322608: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x322608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x32260c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x32260cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x322610: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x322610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x322614: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x322614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x322618: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x322618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32261c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32261cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x322620: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x322620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x322624: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x322624u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x322628: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x322628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32262c: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32262Cu;
    {
        const bool branch_taken_0x32262c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x322630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32262Cu;
        // 0x322630: 0x3183c  dsll32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32262c) {
            ctx->pc = 0x322648u;
            goto label_322648;
        }
    }
    ctx->pc = 0x322634u;
    // 0x322634: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x322634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x322638: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x322638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x32263c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32263Cu;
    {
        const bool branch_taken_0x32263c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32263Cu;
        // 0x322640: 0xc21825  or          $v1, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32263c) {
            ctx->pc = 0x322654u;
            goto label_322654;
        }
    }
    ctx->pc = 0x322644u;
    // 0x322644: 0x0  nop
    ctx->pc = 0x322644u;
    // NOP
label_322648:
    // 0x322648: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x322648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x32264c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x32264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x322650: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x322650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_322654:
    // 0x322654: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x322654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x322658: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x322658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x32265c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32265cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x322660: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x322660u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x322664: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x322664u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
    // 0x322668: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x322668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32266c: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x32266cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x322670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322674: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x322674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x322678: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x322678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32267c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x32267cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x322680: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x322680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x322684: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x322684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x322688: 0x3e00008  jr          $ra
    ctx->pc = 0x322688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322688u;
        // 0x32268c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322690u;
label_322690:
    // 0x322690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x322690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x322694: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x322694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x322698: 0x24900040  addiu       $s0, $a0, 0x40
    ctx->pc = 0x322698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x32269c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32269cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3226a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3226a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3226a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3226a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3226a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3226a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3226ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3226acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3226b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3226b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3226b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3226B4u;
    {
        const bool branch_taken_0x3226b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3226B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3226B4u;
        // 0x3226b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3226b4) {
            ctx->pc = 0x3226C8u;
            goto label_3226c8;
        }
    }
    ctx->pc = 0x3226BCu;
    // 0x3226bc: 0xc0c8d38  jal         func_3234E0
    ctx->pc = 0x3226BCu;
    SET_GPR_U32(ctx, 31, 0x3226C4u);
    ctx->pc = 0x3234E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234E0u, 0x3226BCu, 0x3226C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3226C4u;
label_3226c4:
    // 0x3226c4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3226c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3226c8:
    // 0x3226c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3226c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3226cc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x3226ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x3226d0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x3226d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3226d4: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3226D4u;
    {
        const bool branch_taken_0x3226d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3226d4) {
            ctx->pc = 0x3226D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3226D4u;
            // 0x3226d8: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3226F0u;
            goto label_3226f0;
        }
    }
    ctx->pc = 0x3226DCu;
    // 0x3226dc: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x3226dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x3226e0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3226e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x3226e4: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x3226e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x3226e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3226E8u;
    {
        const bool branch_taken_0x3226e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3226ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3226E8u;
        // 0x3226ec: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3226e8) {
            ctx->pc = 0x322700u;
            goto label_322700;
        }
    }
    ctx->pc = 0x3226F0u;
label_3226f0:
    // 0x3226f0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3226f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x3226f4: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x3226f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x3226f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3226f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3226fc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3226fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_322700:
    // 0x322700: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x322700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x322704: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x322704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x322708: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x322708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32270c: 0x3c036c05  lui         $v1, 0x6C05
    ctx->pc = 0x32270cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27653 << 16));
    // 0x322710: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x322710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x322714: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x322714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x322718: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x322718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32271c: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x32271cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x322720: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x322720u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
    // 0x322724: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x322724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x322728: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x322728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32272c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32272cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322730: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x322730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x322734: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x322734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322738: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x322738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x32273c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32273cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x322740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x322740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x322744: 0x3e00008  jr          $ra
    ctx->pc = 0x322744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322744u;
        // 0x322748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32274Cu;
    // 0x32274c: 0x0  nop
    ctx->pc = 0x32274cu;
    // NOP
    ctx->pc = 0x322750u;
}
