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

// Function: sub_00322518
// Address: 0x322518 - 0x3225d8
void sub_00322518_0x322518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322518_0x322518");
#endif

    switch (ctx->pc) {
        case 0x32254cu: goto label_32254c;
        default: break;
    }

    ctx->pc = 0x322518u;

    // 0x322518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x322518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32251c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32251cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x322520: 0x2490001c  addiu       $s0, $a0, 0x1C
    ctx->pc = 0x322520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x322524: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x322524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x322528: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x322528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32252c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32252cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x322530: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x322530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322534: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x322534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x322538: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x322538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32253c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32253Cu;
    {
        const bool branch_taken_0x32253c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32253Cu;
        // 0x322540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32253c) {
            ctx->pc = 0x322550u;
            goto label_322550;
        }
    }
    ctx->pc = 0x322544u;
    // 0x322544: 0xc0c8a60  jal         func_322980
    ctx->pc = 0x322544u;
    SET_GPR_U32(ctx, 31, 0x32254Cu);
    ctx->pc = 0x322980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322980u, 0x322544u, 0x32254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32254Cu;
label_32254c:
    // 0x32254c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x32254cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_322550:
    // 0x322550: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x322550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x322554: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x322554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x322558: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x322558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32255c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32255Cu;
    {
        const bool branch_taken_0x32255c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32255c) {
            ctx->pc = 0x322560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32255Cu;
            // 0x322560: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322578u;
            goto label_322578;
        }
    }
    ctx->pc = 0x322564u;
    // 0x322564: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x322564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x322568: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x322568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x32256c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x32256cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x322570: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x322570u;
    {
        const bool branch_taken_0x322570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322570u;
        // 0x322574: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322570) {
            ctx->pc = 0x322588u;
            goto label_322588;
        }
    }
    ctx->pc = 0x322578u;
label_322578:
    // 0x322578: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x322578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x32257c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x32257cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x322580: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x322580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x322584: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x322584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_322588:
    // 0x322588: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x322588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32258c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32258cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x322590: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x322590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x322594: 0x3c036c02  lui         $v1, 0x6C02
    ctx->pc = 0x322594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27650 << 16));
    // 0x322598: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x322598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x32259c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32259cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3225a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3225a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3225a4: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x3225a4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3225a8: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x3225a8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
    // 0x3225ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3225acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3225b0: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x3225b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3225b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3225b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3225b8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3225b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3225bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3225bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3225c0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3225c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3225c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3225c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3225c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3225c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3225cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3225CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3225D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3225CCu;
        // 0x3225d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3225CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3225D4u;
    // 0x3225d4: 0x0  nop
    ctx->pc = 0x3225d4u;
    // NOP
    ctx->pc = 0x3225d8u;
}
