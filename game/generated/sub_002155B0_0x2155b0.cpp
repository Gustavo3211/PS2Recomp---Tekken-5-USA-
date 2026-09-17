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

// Function: sub_002155B0
// Address: 0x2155b0 - 0x215720
void sub_002155B0_0x2155b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002155B0_0x2155b0");
#endif

    switch (ctx->pc) {
        case 0x215600u: goto label_215600;
        case 0x215608u: goto label_215608;
        case 0x215618u: goto label_215618;
        case 0x215628u: goto label_215628;
        case 0x215638u: goto label_215638;
        case 0x215648u: goto label_215648;
        case 0x215674u: goto label_215674;
        case 0x2156a4u: goto label_2156a4;
        case 0x2156acu: goto label_2156ac;
        case 0x2156b4u: goto label_2156b4;
        case 0x2156c8u: goto label_2156c8;
        case 0x2156d8u: goto label_2156d8;
        case 0x2156e0u: goto label_2156e0;
        case 0x215700u: goto label_215700;
        default: break;
    }

    ctx->pc = 0x2155b0u;

    // 0x2155b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2155b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2155b4: 0x8f82c918  lw          $v0, -0x36E8($gp)
    ctx->pc = 0x2155b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953240)));
    // 0x2155b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2155b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2155bc: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x2155bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x2155c0: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2155c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2155c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2155c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2155c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2155c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2155cc: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2155ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2155d0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2155d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2155d4: 0x2644c450  addiu       $a0, $s2, -0x3BB0
    ctx->pc = 0x2155d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952016));
    // 0x2155d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2155d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2155dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2155dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2155e0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2155e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2155e4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2155e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2155e8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2155e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2155ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2155ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2155f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2155f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2155f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2155f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2155f8: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2155F8u;
    SET_GPR_U32(ctx, 31, 0x215600u);
    ctx->pc = 0x2155FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2155F8u;
    // 0x2155fc: 0xaf82c918  sw          $v0, -0x36E8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2155F8u, 0x215600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215600u;
label_215600:
    // 0x215600: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x215600u;
    SET_GPR_U32(ctx, 31, 0x215608u);
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x215600u, 0x215608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215608u;
label_215608:
    // 0x215608: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x215608u;
    {
        const bool branch_taken_0x215608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215608u;
        // 0x21560c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215608) {
            ctx->pc = 0x215700u;
            goto label_215700;
        }
    }
    ctx->pc = 0x215610u;
    // 0x215610: 0xc0898ee  jal         func_2263B8
    ctx->pc = 0x215610u;
    SET_GPR_U32(ctx, 31, 0x215618u);
    ctx->pc = 0x215614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215610u;
    // 0x215614: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2263B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2263B8u, 0x215610u, 0x215618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215618u;
label_215618:
    // 0x215618: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x215618u;
    {
        const bool branch_taken_0x215618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215618u;
        // 0x21561c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215618) {
            ctx->pc = 0x215700u;
            goto label_215700;
        }
    }
    ctx->pc = 0x215620u;
    // 0x215620: 0xc0898ee  jal         func_2263B8
    ctx->pc = 0x215620u;
    SET_GPR_U32(ctx, 31, 0x215628u);
    ctx->pc = 0x215624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215620u;
    // 0x215624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2263B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2263B8u, 0x215620u, 0x215628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215628u;
label_215628:
    // 0x215628: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x215628u;
    {
        const bool branch_taken_0x215628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215628) {
            ctx->pc = 0x21562Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215628u;
            // 0x21562c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215704u;
            goto label_215704;
        }
    }
    ctx->pc = 0x215630u;
    // 0x215630: 0xc0899ba  jal         func_2266E8
    ctx->pc = 0x215630u;
    SET_GPR_U32(ctx, 31, 0x215638u);
    ctx->pc = 0x2266E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266E8u, 0x215630u, 0x215638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215638u;
label_215638:
    // 0x215638: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x215638u;
    {
        const bool branch_taken_0x215638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215638) {
            ctx->pc = 0x21563Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215638u;
            // 0x21563c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215704u;
            goto label_215704;
        }
    }
    ctx->pc = 0x215640u;
    // 0x215640: 0xc090b40  jal         func_242D00
    ctx->pc = 0x215640u;
    SET_GPR_U32(ctx, 31, 0x215648u);
    ctx->pc = 0x242D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242D00u, 0x215640u, 0x215648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215648u;
label_215648:
    // 0x215648: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x215648u;
    {
        const bool branch_taken_0x215648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215648u;
        // 0x21564c: 0x8f82c918  lw          $v0, -0x36E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215648) {
            ctx->pc = 0x215700u;
            goto label_215700;
        }
    }
    ctx->pc = 0x215650u;
    // 0x215650: 0x1c40002c  bgtz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x215650u;
    {
        const bool branch_taken_0x215650 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x215654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215650u;
        // 0x215654: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215650) {
            ctx->pc = 0x215704u;
            goto label_215704;
        }
    }
    ctx->pc = 0x215658u;
    // 0x215658: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x215658u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x21565c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21565cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215660: 0x26108858  addiu       $s0, $s0, -0x77A8
    ctx->pc = 0x215660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    // 0x215664: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x215664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x215668: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x215668u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3A8878u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8878u, _value); } while (0);
    // 0x21566c: 0xc0b4266  jal         func_2D0998
    ctx->pc = 0x21566Cu;
    SET_GPR_U32(ctx, 31, 0x215674u);
    ctx->pc = 0x215670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21566Cu;
    // 0x215670: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0998u, 0x21566Cu, 0x215674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215674u;
label_215674:
    // 0x215674: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x215674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x215678: 0x246388d0  addiu       $v1, $v1, -0x7730
    ctx->pc = 0x215678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x21567c: 0x9225001e  lbu         $a1, 0x1E($s1)
    ctx->pc = 0x21567cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x215680: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x215680u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x215684: 0xa04501bb  sb          $a1, 0x1BB($v0)
    ctx->pc = 0x215684u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 443), (uint8_t)GPR_U32(ctx, 5));
    // 0x215688: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x215688u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x21568c: 0x9224001f  lbu         $a0, 0x1F($s1)
    ctx->pc = 0x21568cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
    // 0x215690: 0xa04401bb  sb          $a0, 0x1BB($v0)
    ctx->pc = 0x215690u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 443), (uint8_t)GPR_U32(ctx, 4));
    // 0x215694: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x215694u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x215698: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x215698u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x21569c: 0xc07c71c  jal         func_1F1C70
    ctx->pc = 0x21569Cu;
    SET_GPR_U32(ctx, 31, 0x2156A4u);
    ctx->pc = 0x2156A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21569Cu;
    // 0x2156a0: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1C70u, 0x21569Cu, 0x2156A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2156A4u;
label_2156a4:
    // 0x2156a4: 0xc0821d2  jal         func_208748
    ctx->pc = 0x2156A4u;
    SET_GPR_U32(ctx, 31, 0x2156ACu);
    ctx->pc = 0x208748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208748u, 0x2156A4u, 0x2156ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2156ACu;
label_2156ac:
    // 0x2156ac: 0xc08215c  jal         func_208570
    ctx->pc = 0x2156ACu;
    SET_GPR_U32(ctx, 31, 0x2156B4u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x2156ACu, 0x2156B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2156B4u;
label_2156b4:
    // 0x2156b4: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2156b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2156b8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2156B8u;
    {
        const bool branch_taken_0x2156b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2156b8) {
            ctx->pc = 0x2156D0u;
            goto label_2156d0;
        }
    }
    ctx->pc = 0x2156C0u;
    // 0x2156c0: 0xc07ce42  jal         func_1F3908
    ctx->pc = 0x2156C0u;
    SET_GPR_U32(ctx, 31, 0x2156C8u);
    ctx->pc = 0x2156C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2156C0u;
    // 0x2156c4: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3908u, 0x2156C0u, 0x2156C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2156C8u;
label_2156c8:
    // 0x2156c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2156C8u;
    {
        const bool branch_taken_0x2156c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2156c8) {
            ctx->pc = 0x2156D8u;
            goto label_2156d8;
        }
    }
    ctx->pc = 0x2156D0u;
label_2156d0:
    // 0x2156d0: 0xc092104  jal         func_248410
    ctx->pc = 0x2156D0u;
    SET_GPR_U32(ctx, 31, 0x2156D8u);
    ctx->pc = 0x248410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248410u, 0x2156D0u, 0x2156D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2156D8u;
label_2156d8:
    // 0x2156d8: 0xc07c4c0  jal         func_1F1300
    ctx->pc = 0x2156D8u;
    SET_GPR_U32(ctx, 31, 0x2156E0u);
    ctx->pc = 0x2156DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2156D8u;
    // 0x2156dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1300u, 0x2156D8u, 0x2156E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2156E0u;
label_2156e0:
    // 0x2156e0: 0x2644c450  addiu       $a0, $s2, -0x3BB0
    ctx->pc = 0x2156e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952016));
    // 0x2156e4: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2156e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2156e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2156e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2156ec: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2156ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2156f0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2156f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2156f4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2156f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2156f8: 0xc0a5ec2  jal         func_297B08
    ctx->pc = 0x2156F8u;
    SET_GPR_U32(ctx, 31, 0x215700u);
    ctx->pc = 0x2156FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2156F8u;
    // 0x2156fc: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B08u, 0x2156F8u, 0x215700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215700u;
label_215700:
    // 0x215700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_215704:
    // 0x215704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x215704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215708: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x215708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21570c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21570cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215710: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x215710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x215714: 0x3e00008  jr          $ra
    ctx->pc = 0x215714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215714u;
        // 0x215718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21571Cu;
    // 0x21571c: 0x0  nop
    ctx->pc = 0x21571cu;
    // NOP
    ctx->pc = 0x215720u;
}
