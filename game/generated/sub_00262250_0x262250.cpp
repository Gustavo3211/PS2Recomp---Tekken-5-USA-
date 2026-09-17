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

// Function: sub_00262250
// Address: 0x262250 - 0x2623a0
void sub_00262250_0x262250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262250_0x262250");
#endif

    switch (ctx->pc) {
        case 0x2622d8u: goto label_2622d8;
        case 0x2622f8u: goto label_2622f8;
        case 0x262318u: goto label_262318;
        case 0x262338u: goto label_262338;
        case 0x262358u: goto label_262358;
        default: break;
    }

    ctx->pc = 0x262250u;

    // 0x262250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x262250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x262254: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x262254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x262258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26225c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26225cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262260: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x262260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x262264: 0x14a20048  bne         $a1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x262264u;
    {
        const bool branch_taken_0x262264 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x262268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262264u;
        // 0x262268: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262264) {
            ctx->pc = 0x262388u;
            goto label_262388;
        }
    }
    ctx->pc = 0x26226Cu;
    // 0x26226c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x26226cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262270: 0x56110046  bnel        $s0, $s1, . + 4 + (0x46 << 2)
    ctx->pc = 0x262270u;
    {
        const bool branch_taken_0x262270 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x262270) {
            ctx->pc = 0x262274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262270u;
            // 0x262274: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26238Cu;
            goto label_26238c;
        }
    }
    ctx->pc = 0x262278u;
    // 0x262278: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x262278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x26227c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x26227cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x262280: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x262280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x262284: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x262284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x262288: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x262288u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x26228c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x26228cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x262290: 0x244223b8  addiu       $v0, $v0, 0x23B8
    ctx->pc = 0x262290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9144));
    // 0x262294: 0x2484da68  addiu       $a0, $a0, -0x2598
    ctx->pc = 0x262294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957672));
    // 0x262298: 0x24a5d978  addiu       $a1, $a1, -0x2688
    ctx->pc = 0x262298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957432));
    // 0x26229c: 0x24c6da18  addiu       $a2, $a2, -0x25E8
    ctx->pc = 0x26229cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957592));
    // 0x2622a0: 0x24e7d9c8  addiu       $a3, $a3, -0x2638
    ctx->pc = 0x2622a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957512));
    // 0x2622a4: 0x2463d928  addiu       $v1, $v1, -0x26D8
    ctx->pc = 0x2622a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957352));
    // 0x2622a8: 0xac4300d4  sw          $v1, 0xD4($v0)
    ctx->pc = 0x2622a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3B248Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B248Cu, _value); } while (0);
    // 0x2622ac: 0xac440024  sw          $a0, 0x24($v0)
    ctx->pc = 0x2622acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3B23DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B23DCu, _value); } while (0);
    // 0x2622b0: 0xac45004c  sw          $a1, 0x4C($v0)
    ctx->pc = 0x2622b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3B2404u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B2404u, _value); } while (0);
    // 0x2622b4: 0xac460074  sw          $a2, 0x74($v0)
    ctx->pc = 0x2622b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3B242Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B242Cu, _value); } while (0);
    // 0x2622b8: 0x16110033  bne         $s0, $s1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2622B8u;
    {
        const bool branch_taken_0x2622b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x2622BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622B8u;
        // 0x2622bc: 0xac47009c  sw          $a3, 0x9C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2622b8) {
            ctx->pc = 0x262388u;
            goto label_262388;
        }
    }
    ctx->pc = 0x2622C0u;
    // 0x2622c0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x2622c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x2622c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2622c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2622c8: 0x2484e770  addiu       $a0, $a0, -0x1890
    ctx->pc = 0x2622c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961008));
    // 0x2622cc: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x2622ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2622d0: 0xc097f3a  jal         func_25FCE8
    ctx->pc = 0x2622D0u;
    SET_GPR_U32(ctx, 31, 0x2622D8u);
    ctx->pc = 0x2622D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2622D0u;
    // 0x2622d4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCE8u, 0x2622D0u, 0x2622D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2622D8u;
label_2622d8:
    // 0x2622d8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x2622d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x2622dc: 0x2484e7c0  addiu       $a0, $a0, -0x1840
    ctx->pc = 0x2622dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961088));
    // 0x2622e0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2622e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2622e4: 0x240603e0  addiu       $a2, $zero, 0x3E0
    ctx->pc = 0x2622e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
    // 0x2622e8: 0x16110027  bne         $s0, $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2622E8u;
    {
        const bool branch_taken_0x2622e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x2622ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622E8u;
        // 0x2622ec: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2622e8) {
            ctx->pc = 0x262388u;
            goto label_262388;
        }
    }
    ctx->pc = 0x2622F0u;
    // 0x2622f0: 0xc097f3a  jal         func_25FCE8
    ctx->pc = 0x2622F0u;
    SET_GPR_U32(ctx, 31, 0x2622F8u);
    ctx->pc = 0x25FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCE8u, 0x2622F0u, 0x2622F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2622F8u;
label_2622f8:
    // 0x2622f8: 0x56110024  bnel        $s0, $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2622F8u;
    {
        const bool branch_taken_0x2622f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2622f8) {
            ctx->pc = 0x2622FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2622F8u;
            // 0x2622fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26238Cu;
            goto label_26238c;
        }
    }
    ctx->pc = 0x262300u;
    // 0x262300: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x262300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x262304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x262304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262308: 0x2484eba0  addiu       $a0, $a0, -0x1460
    ctx->pc = 0x262308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962080));
    // 0x26230c: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x26230cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x262310: 0xc097f3a  jal         func_25FCE8
    ctx->pc = 0x262310u;
    SET_GPR_U32(ctx, 31, 0x262318u);
    ctx->pc = 0x262314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262310u;
    // 0x262314: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCE8u, 0x262310u, 0x262318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262318u;
label_262318:
    // 0x262318: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x262318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x26231c: 0x2484ebe8  addiu       $a0, $a0, -0x1418
    ctx->pc = 0x26231cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962152));
    // 0x262320: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x262320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262324: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x262324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x262328: 0x16110017  bne         $s0, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x262328u;
    {
        const bool branch_taken_0x262328 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x26232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262328u;
        // 0x26232c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262328) {
            ctx->pc = 0x262388u;
            goto label_262388;
        }
    }
    ctx->pc = 0x262330u;
    // 0x262330: 0xc097f3a  jal         func_25FCE8
    ctx->pc = 0x262330u;
    SET_GPR_U32(ctx, 31, 0x262338u);
    ctx->pc = 0x25FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCE8u, 0x262330u, 0x262338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262338u;
label_262338:
    // 0x262338: 0x56110014  bnel        $s0, $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x262338u;
    {
        const bool branch_taken_0x262338 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x262338) {
            ctx->pc = 0x26233Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262338u;
            // 0x26233c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26238Cu;
            goto label_26238c;
        }
    }
    ctx->pc = 0x262340u;
    // 0x262340: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x262340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x262344: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x262344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x262348: 0x2484ec30  addiu       $a0, $a0, -0x13D0
    ctx->pc = 0x262348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962224));
    // 0x26234c: 0x24060164  addiu       $a2, $zero, 0x164
    ctx->pc = 0x26234cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    // 0x262350: 0xc097f3a  jal         func_25FCE8
    ctx->pc = 0x262350u;
    SET_GPR_U32(ctx, 31, 0x262358u);
    ctx->pc = 0x262354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262350u;
    // 0x262354: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCE8u, 0x262350u, 0x262358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262358u;
label_262358:
    // 0x262358: 0x1611000c  bne         $s0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x262358u;
    {
        const bool branch_taken_0x262358 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x26235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262358u;
        // 0x26235c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262358) {
            ctx->pc = 0x26238Cu;
            goto label_26238c;
        }
    }
    ctx->pc = 0x262360u;
    // 0x262360: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x262360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x262364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x262364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x262368: 0x2484ed98  addiu       $a0, $a0, -0x1268
    ctx->pc = 0x262368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962584));
    // 0x26236c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26236cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262370: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x262370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x262374: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x262374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x262378: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x262378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26237c: 0x8097f3a  j           func_25FCE8
    ctx->pc = 0x26237Cu;
    ctx->pc = 0x262380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26237Cu;
    // 0x262380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCE8u;
    sub_0025FCE8_0x25fce8(rdram, ctx, runtime); return;
    ctx->pc = 0x262384u;
    // 0x262384: 0x0  nop
    ctx->pc = 0x262384u;
    // NOP
label_262388:
    // 0x262388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x262388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26238c:
    // 0x26238c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26238cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x262390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x262390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262394: 0x3e00008  jr          $ra
    ctx->pc = 0x262394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262394u;
        // 0x262398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26239Cu;
    // 0x26239c: 0x0  nop
    ctx->pc = 0x26239cu;
    // NOP
    ctx->pc = 0x2623a0u;
}
