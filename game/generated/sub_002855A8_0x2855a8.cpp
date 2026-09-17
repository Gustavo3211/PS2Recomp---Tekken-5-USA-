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

// Function: sub_002855A8
// Address: 0x2855a8 - 0x285650
void sub_002855A8_0x2855a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002855A8_0x2855a8");
#endif

    switch (ctx->pc) {
        case 0x2855a8u: goto label_2855a8;
        case 0x2855acu: goto label_2855ac;
        case 0x2855b0u: goto label_2855b0;
        case 0x2855b4u: goto label_2855b4;
        case 0x2855b8u: goto label_2855b8;
        case 0x2855bcu: goto label_2855bc;
        case 0x2855c0u: goto label_2855c0;
        case 0x2855c4u: goto label_2855c4;
        case 0x2855c8u: goto label_2855c8;
        case 0x2855ccu: goto label_2855cc;
        case 0x2855d0u: goto label_2855d0;
        case 0x2855d4u: goto label_2855d4;
        case 0x2855d8u: goto label_2855d8;
        case 0x2855dcu: goto label_2855dc;
        case 0x2855e0u: goto label_2855e0;
        case 0x2855e4u: goto label_2855e4;
        case 0x2855e8u: goto label_2855e8;
        case 0x2855ecu: goto label_2855ec;
        case 0x2855f0u: goto label_2855f0;
        case 0x2855f4u: goto label_2855f4;
        case 0x2855f8u: goto label_2855f8;
        case 0x2855fcu: goto label_2855fc;
        case 0x285600u: goto label_285600;
        case 0x285604u: goto label_285604;
        case 0x285608u: goto label_285608;
        case 0x28560cu: goto label_28560c;
        case 0x285610u: goto label_285610;
        case 0x285614u: goto label_285614;
        case 0x285618u: goto label_285618;
        case 0x28561cu: goto label_28561c;
        case 0x285620u: goto label_285620;
        case 0x285624u: goto label_285624;
        case 0x285628u: goto label_285628;
        case 0x28562cu: goto label_28562c;
        case 0x285630u: goto label_285630;
        case 0x285634u: goto label_285634;
        case 0x285638u: goto label_285638;
        case 0x28563cu: goto label_28563c;
        case 0x285640u: goto label_285640;
        case 0x285644u: goto label_285644;
        case 0x285648u: goto label_285648;
        case 0x28564cu: goto label_28564c;
        default: break;
    }

    ctx->pc = 0x2855a8u;

label_2855a8:
    // 0x2855a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2855a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2855ac:
    // 0x2855ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2855acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2855b0:
    // 0x2855b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2855b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2855b4:
    // 0x2855b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2855b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2855b8:
    // 0x2855b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2855b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2855bc:
    // 0x2855bc: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x2855bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_2855c0:
    // 0x2855c0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2855c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2855c4:
    // 0x2855c4: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_2855c8:
    if (ctx->pc == 0x2855C8u) {
        ctx->pc = 0x2855C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855C4u;
        // 0x2855c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2855CCu;
        goto label_2855cc;
    }
    ctx->pc = 0x2855C4u;
    {
        const bool branch_taken_0x2855c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2855c4) {
            ctx->pc = 0x2855C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2855C4u;
            // 0x2855c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285640u;
            goto label_285640;
        }
    }
    ctx->pc = 0x2855CCu;
label_2855cc:
    // 0x2855cc: 0x5060001c  beql        $v1, $zero, . + 4 + (0x1C << 2)
label_2855d0:
    if (ctx->pc == 0x2855D0u) {
        ctx->pc = 0x2855D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855CCu;
        // 0x2855d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2855D4u;
        goto label_2855d4;
    }
    ctx->pc = 0x2855CCu;
    {
        const bool branch_taken_0x2855cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2855cc) {
            ctx->pc = 0x2855D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2855CCu;
            // 0x2855d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285640u;
            goto label_285640;
        }
    }
    ctx->pc = 0x2855D4u;
label_2855d4:
    // 0x2855d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2855d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2855d8:
    // 0x2855d8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2855dc:
    if (ctx->pc == 0x2855DCu) {
        ctx->pc = 0x2855DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855D8u;
        // 0x2855dc: 0x28430009  slti        $v1, $v0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2855E0u;
        goto label_2855e0;
    }
    ctx->pc = 0x2855D8u;
    {
        const bool branch_taken_0x2855d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2855DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855D8u;
        // 0x2855dc: 0x28430009  slti        $v1, $v0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2855d8) {
            ctx->pc = 0x28563Cu;
            goto label_28563c;
        }
    }
    ctx->pc = 0x2855E0u;
label_2855e0:
    // 0x2855e0: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
label_2855e4:
    if (ctx->pc == 0x2855E4u) {
        ctx->pc = 0x2855E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855E0u;
        // 0x2855e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2855E8u;
        goto label_2855e8;
    }
    ctx->pc = 0x2855E0u;
    {
        const bool branch_taken_0x2855e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2855e0) {
            ctx->pc = 0x2855E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2855E0u;
            // 0x2855e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285640u;
            goto label_285640;
        }
    }
    ctx->pc = 0x2855E8u;
label_2855e8:
    // 0x2855e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2855e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2855ec:
    // 0x2855ec: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_2855f0:
    if (ctx->pc == 0x2855F0u) {
        ctx->pc = 0x2855F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855ECu;
        // 0x2855f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2855F4u;
        goto label_2855f4;
    }
    ctx->pc = 0x2855ECu;
    {
        const bool branch_taken_0x2855ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2855ec) {
            ctx->pc = 0x2855F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2855ECu;
            // 0x2855f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285640u;
            goto label_285640;
        }
    }
    ctx->pc = 0x2855F4u;
label_2855f4:
    // 0x2855f4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2855f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2855f8:
    // 0x2855f8: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_2855fc:
    if (ctx->pc == 0x2855FCu) {
        ctx->pc = 0x2855FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855F8u;
        // 0x2855fc: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285600u;
        goto label_285600;
    }
    ctx->pc = 0x2855F8u;
    {
        const bool branch_taken_0x2855f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2855f8) {
            ctx->pc = 0x2855FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2855F8u;
            // 0x2855fc: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28561Cu;
            goto label_28561c;
        }
    }
    ctx->pc = 0x285600u;
label_285600:
    // 0x285600: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x285600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_285604:
    // 0x285604: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x285604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_285608:
    // 0x285608: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x285608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_28560c:
    // 0x28560c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28560cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_285610:
    // 0x285610: 0x60f809  jalr        $v1
label_285614:
    if (ctx->pc == 0x285614u) {
        ctx->pc = 0x285614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285610u;
        // 0x285614: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285618u;
        goto label_285618;
    }
    ctx->pc = 0x285610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x285618u);
        ctx->pc = 0x285614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285610u;
        // 0x285614: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285610u, 0x285618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285618u;
label_285618:
    // 0x285618: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x285618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_28561c:
    // 0x28561c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_285620:
    if (ctx->pc == 0x285620u) {
        ctx->pc = 0x285620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28561Cu;
        // 0x285620: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285624u;
        goto label_285624;
    }
    ctx->pc = 0x28561Cu;
    {
        const bool branch_taken_0x28561c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x285620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28561Cu;
        // 0x285620: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28561c) {
            ctx->pc = 0x285640u;
            goto label_285640;
        }
    }
    ctx->pc = 0x285624u;
label_285624:
    // 0x285624: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x285624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_285628:
    // 0x285628: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x285628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_28562c:
    // 0x28562c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x28562cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_285630:
    // 0x285630: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x285630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_285634:
    // 0x285634: 0x60f809  jalr        $v1
label_285638:
    if (ctx->pc == 0x285638u) {
        ctx->pc = 0x285638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285634u;
        // 0x285638: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28563Cu;
        goto label_28563c;
    }
    ctx->pc = 0x285634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28563Cu);
        ctx->pc = 0x285638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285634u;
        // 0x285638: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285634u, 0x28563Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28563Cu;
label_28563c:
    // 0x28563c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28563cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_285640:
    // 0x285640: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x285640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_285644:
    // 0x285644: 0x3e00008  jr          $ra
label_285648:
    if (ctx->pc == 0x285648u) {
        ctx->pc = 0x285648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285644u;
        // 0x285648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28564Cu;
        goto label_28564c;
    }
    ctx->pc = 0x285644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285644u;
        // 0x285648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28564Cu;
label_28564c:
    // 0x28564c: 0x0  nop
    ctx->pc = 0x28564cu;
    // NOP
    ctx->pc = 0x285650u;
}
