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

// Function: sub_00237480
// Address: 0x237480 - 0x237580
void sub_00237480_0x237480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237480_0x237480");
#endif

    switch (ctx->pc) {
        case 0x2374ccu: goto label_2374cc;
        case 0x2374dcu: goto label_2374dc;
        case 0x2374ecu: goto label_2374ec;
        case 0x237540u: goto label_237540;
        case 0x237548u: goto label_237548;
        default: break;
    }

    ctx->pc = 0x237480u;

    // 0x237480: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x237480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x237484: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x237484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x237488: 0x8c4388ac  lw          $v1, -0x7754($v0)
    ctx->pc = 0x237488u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x23748c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23748cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x237490: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x237490u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237494: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x237494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x237498: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x237498u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23749c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x23749cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2374a0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2374a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2374a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2374a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2374a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2374a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2374ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2374acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2374b0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2374B0u;
    {
        const bool branch_taken_0x2374b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2374B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374B0u;
        // 0x2374b4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2374b0) {
            ctx->pc = 0x237540u;
            goto label_237540;
        }
    }
    ctx->pc = 0x2374B8u;
    // 0x2374b8: 0x267000c0  addiu       $s0, $s3, 0xC0
    ctx->pc = 0x2374b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x2374bc: 0x267101a0  addiu       $s1, $s3, 0x1A0
    ctx->pc = 0x2374bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 416));
    // 0x2374c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2374c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2374c4: 0xc08cc22  jal         func_233088
    ctx->pc = 0x2374C4u;
    SET_GPR_U32(ctx, 31, 0x2374CCu);
    ctx->pc = 0x2374C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2374C4u;
    // 0x2374c8: 0x26720280  addiu       $s2, $s3, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233088u, 0x2374C4u, 0x2374CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2374CCu;
label_2374cc:
    // 0x2374cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2374ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2374d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2374d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2374d4: 0xc08cc22  jal         func_233088
    ctx->pc = 0x2374D4u;
    SET_GPR_U32(ctx, 31, 0x2374DCu);
    ctx->pc = 0x2374D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2374D4u;
    // 0x2374d8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233088u, 0x2374D4u, 0x2374DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2374DCu;
label_2374dc:
    // 0x2374dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2374dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2374e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2374e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2374e4: 0xc08cc22  jal         func_233088
    ctx->pc = 0x2374E4u;
    SET_GPR_U32(ctx, 31, 0x2374ECu);
    ctx->pc = 0x2374E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2374E4u;
    // 0x2374e8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233088u, 0x2374E4u, 0x2374ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2374ECu;
label_2374ec:
    // 0x2374ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2374ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2374f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2374F0u;
    {
        const bool branch_taken_0x2374f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2374f0) {
            ctx->pc = 0x2374F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2374F0u;
            // 0x2374f4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237508u;
            goto label_237508;
        }
    }
    ctx->pc = 0x2374F8u;
    // 0x2374f8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2374f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2374fc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2374FCu;
    {
        const bool branch_taken_0x2374fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2374fc) {
            ctx->pc = 0x237540u;
            goto label_237540;
        }
    }
    ctx->pc = 0x237504u;
    // 0x237504: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x237504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_237508:
    // 0x237508: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x237508u;
    {
        const bool branch_taken_0x237508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237508) {
            ctx->pc = 0x23750Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237508u;
            // 0x23750c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237520u;
            goto label_237520;
        }
    }
    ctx->pc = 0x237510u;
    // 0x237510: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x237510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x237514: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x237514u;
    {
        const bool branch_taken_0x237514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237514) {
            ctx->pc = 0x237540u;
            goto label_237540;
        }
    }
    ctx->pc = 0x23751Cu;
    // 0x23751c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x23751cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_237520:
    // 0x237520: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237520u;
    {
        const bool branch_taken_0x237520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237520u;
        // 0x237524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237520) {
            ctx->pc = 0x237534u;
            goto label_237534;
        }
    }
    ctx->pc = 0x237528u;
    // 0x237528: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x237528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x23752c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23752Cu;
    {
        const bool branch_taken_0x23752c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23752c) {
            ctx->pc = 0x237540u;
            goto label_237540;
        }
    }
    ctx->pc = 0x237534u;
label_237534:
    // 0x237534: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x237534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237538: 0xc08df28  jal         func_237CA0
    ctx->pc = 0x237538u;
    SET_GPR_U32(ctx, 31, 0x237540u);
    ctx->pc = 0x23753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237538u;
    // 0x23753c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237CA0u, 0x237538u, 0x237540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237540u;
label_237540:
    // 0x237540: 0xc08215c  jal         func_208570
    ctx->pc = 0x237540u;
    SET_GPR_U32(ctx, 31, 0x237548u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x237540u, 0x237548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237548u;
label_237548:
    // 0x237548: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x237548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23754c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23754Cu;
    {
        const bool branch_taken_0x23754c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x237550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23754Cu;
        // 0x237550: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23754c) {
            ctx->pc = 0x23755Cu;
            goto label_23755c;
        }
    }
    ctx->pc = 0x237554u;
    // 0x237554: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x237554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x237558: 0xac40dda0  sw          $zero, -0x2260($v0)
    ctx->pc = 0x237558u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3ADDA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3ADDA0u, _value); } while (0);
label_23755c:
    // 0x23755c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23755cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237560: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x237560u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237564: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x237564u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x237568: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x237568u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23756c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x23756cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x237570: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x237570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237574: 0x3e00008  jr          $ra
    ctx->pc = 0x237574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237574u;
        // 0x237578: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23757Cu;
    // 0x23757c: 0x0  nop
    ctx->pc = 0x23757cu;
    // NOP
    ctx->pc = 0x237580u;
}
