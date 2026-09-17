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

// Function: sub_00214200
// Address: 0x214200 - 0x214398
void sub_00214200_0x214200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214200_0x214200");
#endif

    switch (ctx->pc) {
        case 0x214220u: goto label_214220;
        case 0x214250u: goto label_214250;
        case 0x21425cu: goto label_21425c;
        case 0x21427cu: goto label_21427c;
        case 0x214288u: goto label_214288;
        case 0x2142c0u: goto label_2142c0;
        case 0x2142c8u: goto label_2142c8;
        case 0x2142d0u: goto label_2142d0;
        case 0x2142d8u: goto label_2142d8;
        case 0x2142e4u: goto label_2142e4;
        case 0x2142ecu: goto label_2142ec;
        case 0x2142fcu: goto label_2142fc;
        case 0x214304u: goto label_214304;
        case 0x21430cu: goto label_21430c;
        case 0x214330u: goto label_214330;
        case 0x21433cu: goto label_21433c;
        default: break;
    }

    ctx->pc = 0x214200u;

    // 0x214200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214204: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x214204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x214208: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21420c: 0x24508858  addiu       $s0, $v0, -0x77A8
    ctx->pc = 0x21420cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x214210: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x214214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x214218: 0xc085066  jal         func_214198
    ctx->pc = 0x214218u;
    SET_GPR_U32(ctx, 31, 0x214220u);
    ctx->pc = 0x21421Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214218u;
    // 0x21421c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214198u, 0x214218u, 0x214220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214220u;
label_214220:
    // 0x214220: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x214220u;
    {
        const bool branch_taken_0x214220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214220u;
        // 0x214224: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214220) {
            ctx->pc = 0x214380u;
            goto label_214380;
        }
    }
    ctx->pc = 0x214228u;
    // 0x214228: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x214228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21422c: 0x54620055  bnel        $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x21422Cu;
    {
        const bool branch_taken_0x21422c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21422c) {
            ctx->pc = 0x214230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21422Cu;
            // 0x214230: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214384u;
            goto label_214384;
        }
    }
    ctx->pc = 0x214234u;
    // 0x214234: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x214234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x214238: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x214238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x21423c: 0x14620051  bne         $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x21423Cu;
    {
        const bool branch_taken_0x21423c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x214240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21423Cu;
        // 0x214240: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21423c) {
            ctx->pc = 0x214384u;
            goto label_214384;
        }
    }
    ctx->pc = 0x214244u;
    // 0x214244: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x214244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214248: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x214248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21424c: 0x0  nop
    ctx->pc = 0x21424cu;
    // NOP
label_214250:
    // 0x214250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214254: 0xc085048  jal         func_214120
    ctx->pc = 0x214254u;
    SET_GPR_U32(ctx, 31, 0x21425Cu);
    ctx->pc = 0x214258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214254u;
    // 0x214258: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214120u, 0x214254u, 0x21425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21425Cu;
label_21425c:
    // 0x21425c: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x21425cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x214260: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x214260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x214264: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x214264u;
    {
        const bool branch_taken_0x214264 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x214268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214264u;
        // 0x214268: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214264) {
            ctx->pc = 0x214250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214250;
        }
    }
    ctx->pc = 0x21426Cu;
    // 0x21426c: 0x52200045  beql        $s1, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x21426Cu;
    {
        const bool branch_taken_0x21426c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21426c) {
            ctx->pc = 0x214270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21426Cu;
            // 0x214270: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214384u;
            goto label_214384;
        }
    }
    ctx->pc = 0x214274u;
    // 0x214274: 0xc0896ca  jal         func_225B28
    ctx->pc = 0x214274u;
    SET_GPR_U32(ctx, 31, 0x21427Cu);
    ctx->pc = 0x214278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214274u;
    // 0x214278: 0x3c10003e  lui         $s0, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225B28u, 0x214274u, 0x21427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21427Cu;
label_21427c:
    // 0x21427c: 0x260437e0  addiu       $a0, $s0, 0x37E0
    ctx->pc = 0x21427cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14304));
    // 0x214280: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x214280u;
    SET_GPR_U32(ctx, 31, 0x214288u);
    ctx->pc = 0x214284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214280u;
    // 0x214284: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x214280u, 0x214288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214288u;
label_214288:
    // 0x214288: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x214288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x21428c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21428cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214290: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x214290u;
    {
        const bool branch_taken_0x214290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x214290) {
            ctx->pc = 0x214294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214290u;
            // 0x214294: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2142ACu;
            goto label_2142ac;
        }
    }
    ctx->pc = 0x214298u;
    // 0x214298: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x214298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21429c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x21429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2142a0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2142A0u;
    {
        const bool branch_taken_0x2142a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2142a0) {
            ctx->pc = 0x2142A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2142A0u;
            // 0x2142a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2142B8u;
            goto label_2142b8;
        }
    }
    ctx->pc = 0x2142A8u;
    // 0x2142a8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2142a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2142ac:
    // 0x2142ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2142acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2142b0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2142b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2142b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2142b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2142b8:
    // 0x2142b8: 0xc0902c4  jal         func_240B10
    ctx->pc = 0x2142B8u;
    SET_GPR_U32(ctx, 31, 0x2142C0u);
    ctx->pc = 0x2142BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2142B8u;
    // 0x2142bc: 0x261037e0  addiu       $s0, $s0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240B10u, 0x2142B8u, 0x2142C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2142C0u;
label_2142c0:
    // 0x2142c0: 0xc085116  jal         func_214458
    ctx->pc = 0x2142C0u;
    SET_GPR_U32(ctx, 31, 0x2142C8u);
    ctx->pc = 0x214458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214458u, 0x2142C0u, 0x2142C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2142C8u;
label_2142c8:
    // 0x2142c8: 0xc0898be  jal         func_2262F8
    ctx->pc = 0x2142C8u;
    SET_GPR_U32(ctx, 31, 0x2142D0u);
    ctx->pc = 0x2262F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262F8u, 0x2142C8u, 0x2142D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2142D0u;
label_2142d0:
    // 0x2142d0: 0xc089a00  jal         func_226800
    ctx->pc = 0x2142D0u;
    SET_GPR_U32(ctx, 31, 0x2142D8u);
    ctx->pc = 0x226800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226800u, 0x2142D0u, 0x2142D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2142D8u;
label_2142d8:
    // 0x2142d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2142d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2142dc: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2142DCu;
    SET_GPR_U32(ctx, 31, 0x2142E4u);
    ctx->pc = 0x2142E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2142DCu;
    // 0x2142e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2142DCu, 0x2142E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2142E4u;
label_2142e4:
    // 0x2142e4: 0xc085c6e  jal         func_2171B8
    ctx->pc = 0x2142E4u;
    SET_GPR_U32(ctx, 31, 0x2142ECu);
    ctx->pc = 0x2142E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2142E4u;
    // 0x2142e8: 0xac400050  sw          $zero, 0x50($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2171B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2171B8u, 0x2142E4u, 0x2142ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2142ECu;
label_2142ec:
    // 0x2142ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2142ECu;
    {
        const bool branch_taken_0x2142ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2142ec) {
            ctx->pc = 0x214328u;
            goto label_214328;
        }
    }
    ctx->pc = 0x2142F4u;
    // 0x2142f4: 0xc085c70  jal         func_2171C0
    ctx->pc = 0x2142F4u;
    SET_GPR_U32(ctx, 31, 0x2142FCu);
    ctx->pc = 0x2142F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2142F4u;
    // 0x2142f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2171C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2171C0u, 0x2142F4u, 0x2142FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2142FCu;
label_2142fc:
    // 0x2142fc: 0xc085c72  jal         func_2171C8
    ctx->pc = 0x2142FCu;
    SET_GPR_U32(ctx, 31, 0x214304u);
    ctx->pc = 0x2171C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2171C8u, 0x2142FCu, 0x214304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214304u;
label_214304:
    // 0x214304: 0xc085c74  jal         func_2171D0
    ctx->pc = 0x214304u;
    SET_GPR_U32(ctx, 31, 0x21430Cu);
    ctx->pc = 0x214308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214304u;
    // 0x214308: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2171D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2171D0u, 0x214304u, 0x21430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21430Cu;
label_21430c:
    // 0x21430c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21430cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214314: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214318: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x214318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21431c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21431cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214320: 0x80b7fe0  j           func_2DFF80
    ctx->pc = 0x214320u;
    ctx->pc = 0x214324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214320u;
    // 0x214324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF80u;
    sub_002DFF80_0x2dff80(rdram, ctx, runtime); return;
    ctx->pc = 0x214328u;
label_214328:
    // 0x214328: 0xc07c24c  jal         func_1F0930
    ctx->pc = 0x214328u;
    SET_GPR_U32(ctx, 31, 0x214330u);
    ctx->pc = 0x21432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214328u;
    // 0x21432c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0930u, 0x214328u, 0x214330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214330u;
label_214330:
    // 0x214330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214334: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x214334u;
    SET_GPR_U32(ctx, 31, 0x21433Cu);
    ctx->pc = 0x214338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214334u;
    // 0x214338: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x214334u, 0x21433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21433Cu;
label_21433c:
    // 0x21433c: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x21433cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x214340: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x214340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x214344: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x214344u;
    {
        const bool branch_taken_0x214344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214344u;
        // 0x214348: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214344) {
            ctx->pc = 0x21435Cu;
            goto label_21435c;
        }
    }
    ctx->pc = 0x21434Cu;
    // 0x21434c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x21434cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x214350: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x214350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x214354: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x214354u;
    {
        const bool branch_taken_0x214354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x214358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214354u;
        // 0x214358: 0x24a30055  addiu       $v1, $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214354) {
            ctx->pc = 0x21436Cu;
            goto label_21436c;
        }
    }
    ctx->pc = 0x21435Cu;
label_21435c:
    // 0x21435c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x21435cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x214360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214364: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x214364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x214368: 0x24a30055  addiu       $v1, $a1, 0x55
    ctx->pc = 0x214368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 85));
label_21436c:
    // 0x21436c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x21436cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214370: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214370u;
    {
        const bool branch_taken_0x214370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214370u;
        // 0x214374: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214370) {
            ctx->pc = 0x214384u;
            goto label_214384;
        }
    }
    ctx->pc = 0x214378u;
    // 0x214378: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x214378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21437c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x21437cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_214380:
    // 0x214380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_214384:
    // 0x214384: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214388: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21438c: 0x3e00008  jr          $ra
    ctx->pc = 0x21438Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21438Cu;
        // 0x214390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21438Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214394u;
    // 0x214394: 0x0  nop
    ctx->pc = 0x214394u;
    // NOP
    ctx->pc = 0x214398u;
}
