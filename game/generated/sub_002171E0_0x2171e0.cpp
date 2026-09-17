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

// Function: sub_002171E0
// Address: 0x2171e0 - 0x2172c8
void sub_002171E0_0x2171e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002171E0_0x2171e0");
#endif

    switch (ctx->pc) {
        case 0x2171f4u: goto label_2171f4;
        case 0x217250u: goto label_217250;
        case 0x21726cu: goto label_21726c;
        case 0x217284u: goto label_217284;
        case 0x217298u: goto label_217298;
        case 0x2172a0u: goto label_2172a0;
        case 0x2172b0u: goto label_2172b0;
        default: break;
    }

    ctx->pc = 0x2171e0u;

    // 0x2171e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2171e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2171e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2171e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2171e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2171e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2171ec: 0xc085116  jal         func_214458
    ctx->pc = 0x2171ECu;
    SET_GPR_U32(ctx, 31, 0x2171F4u);
    ctx->pc = 0x2171F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2171ECu;
    // 0x2171f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214458u, 0x2171ECu, 0x2171F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2171F4u;
label_2171f4:
    // 0x2171f4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2171f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2171f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2171f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2171fc: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2171FCu;
    {
        const bool branch_taken_0x2171fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x217200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171FCu;
        // 0x217200: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171fc) {
            ctx->pc = 0x217238u;
            goto label_217238;
        }
    }
    ctx->pc = 0x217204u;
    // 0x217204: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x217204u;
    {
        const bool branch_taken_0x217204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217204u;
        // 0x217208: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217204) {
            ctx->pc = 0x217220u;
            goto label_217220;
        }
    }
    ctx->pc = 0x21720Cu;
    // 0x21720c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217210: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x217210u;
    {
        const bool branch_taken_0x217210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x217210) {
            ctx->pc = 0x217248u;
            goto label_217248;
        }
    }
    ctx->pc = 0x217218u;
    // 0x217218: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x217218u;
    {
        const bool branch_taken_0x217218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217218) {
            ctx->pc = 0x2172A8u;
            goto label_2172a8;
        }
    }
    ctx->pc = 0x217220u;
label_217220:
    // 0x217220: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x217220u;
    {
        const bool branch_taken_0x217220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x217224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217220u;
        // 0x217224: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217220) {
            ctx->pc = 0x217258u;
            goto label_217258;
        }
    }
    ctx->pc = 0x217228u;
    // 0x217228: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x217228u;
    {
        const bool branch_taken_0x217228 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x217228) {
            ctx->pc = 0x217290u;
            goto label_217290;
        }
    }
    ctx->pc = 0x217230u;
    // 0x217230: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x217230u;
    {
        const bool branch_taken_0x217230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217230) {
            ctx->pc = 0x2172A8u;
            goto label_2172a8;
        }
    }
    ctx->pc = 0x217238u;
label_217238:
    // 0x217238: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x217238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21723c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x21723cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x217240: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x217240u;
    {
        const bool branch_taken_0x217240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217240u;
        // 0x217244: 0xac62886c  sw          $v0, -0x7794($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294936684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217240) {
            ctx->pc = 0x2172B0u;
            goto label_2172b0;
        }
    }
    ctx->pc = 0x217248u;
label_217248:
    // 0x217248: 0xc0a5048  jal         func_294120
    ctx->pc = 0x217248u;
    SET_GPR_U32(ctx, 31, 0x217250u);
    ctx->pc = 0x294120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294120u, 0x217248u, 0x217250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217250u;
label_217250:
    // 0x217250: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x217250u;
    {
        const bool branch_taken_0x217250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217250u;
        // 0x217254: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217250) {
            ctx->pc = 0x2172B4u;
            goto label_2172b4;
        }
    }
    ctx->pc = 0x217258u;
label_217258:
    // 0x217258: 0x8382a2d8  lb          $v0, -0x5D28($gp)
    ctx->pc = 0x217258u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943448)));
    // 0x21725c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x21725Cu;
    {
        const bool branch_taken_0x21725c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21725c) {
            ctx->pc = 0x217260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21725Cu;
            // 0x217260: 0x8384c920  lb          $a0, -0x36E0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294953248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217278u;
            goto label_217278;
        }
    }
    ctx->pc = 0x217264u;
    // 0x217264: 0xc07c22a  jal         func_1F08A8
    ctx->pc = 0x217264u;
    SET_GPR_U32(ctx, 31, 0x21726Cu);
    ctx->pc = 0x217268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217264u;
    // 0x217268: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F08A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F08A8u, 0x217264u, 0x21726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21726Cu;
label_21726c:
    // 0x21726c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21726Cu;
    {
        const bool branch_taken_0x21726c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21726Cu;
        // 0x217270: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21726c) {
            ctx->pc = 0x2172B4u;
            goto label_2172b4;
        }
    }
    ctx->pc = 0x217274u;
    // 0x217274: 0x0  nop
    ctx->pc = 0x217274u;
    // NOP
label_217278:
    // 0x217278: 0x8385c921  lb          $a1, -0x36DF($gp)
    ctx->pc = 0x217278u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294953249)));
    // 0x21727c: 0xc0b7fe0  jal         func_2DFF80
    ctx->pc = 0x21727Cu;
    SET_GPR_U32(ctx, 31, 0x217284u);
    ctx->pc = 0x217280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21727Cu;
    // 0x217280: 0xa380a2d8  sb          $zero, -0x5D28($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943448), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF80u, 0x21727Cu, 0x217284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217284u;
label_217284:
    // 0x217284: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x217284u;
    {
        const bool branch_taken_0x217284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217284u;
        // 0x217288: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217284) {
            ctx->pc = 0x2172B4u;
            goto label_2172b4;
        }
    }
    ctx->pc = 0x21728Cu;
    // 0x21728c: 0x0  nop
    ctx->pc = 0x21728cu;
    // NOP
label_217290:
    // 0x217290: 0xc0c22f0  jal         func_308BC0
    ctx->pc = 0x217290u;
    SET_GPR_U32(ctx, 31, 0x217298u);
    ctx->pc = 0x308BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308BC0u, 0x217290u, 0x217298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217298u;
label_217298:
    // 0x217298: 0xc07c24c  jal         func_1F0930
    ctx->pc = 0x217298u;
    SET_GPR_U32(ctx, 31, 0x2172A0u);
    ctx->pc = 0x21729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217298u;
    // 0x21729c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0930u, 0x217298u, 0x2172A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172A0u;
label_2172a0:
    // 0x2172a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2172A0u;
    {
        const bool branch_taken_0x2172a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2172A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172A0u;
        // 0x2172a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172a0) {
            ctx->pc = 0x2172B4u;
            goto label_2172b4;
        }
    }
    ctx->pc = 0x2172A8u;
label_2172a8:
    // 0x2172a8: 0xc07c24c  jal         func_1F0930
    ctx->pc = 0x2172A8u;
    SET_GPR_U32(ctx, 31, 0x2172B0u);
    ctx->pc = 0x2172ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172A8u;
    // 0x2172ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0930u, 0x2172A8u, 0x2172B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172B0u;
label_2172b0:
    // 0x2172b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2172b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2172b4:
    // 0x2172b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2172b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2172b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2172b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2172bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2172BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2172C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172BCu;
        // 0x2172c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2172BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2172C4u;
    // 0x2172c4: 0x0  nop
    ctx->pc = 0x2172c4u;
    // NOP
    ctx->pc = 0x2172c8u;
}
