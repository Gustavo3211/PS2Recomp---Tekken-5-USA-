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

// Function: sub_00264178
// Address: 0x264178 - 0x264250
void sub_00264178_0x264178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264178_0x264178");
#endif

    switch (ctx->pc) {
        case 0x2641a4u: goto label_2641a4;
        default: break;
    }

    ctx->pc = 0x264178u;

    // 0x264178: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x264178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26417c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26417cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x264180: 0x30c28000  andi        $v0, $a2, 0x8000
    ctx->pc = 0x264180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x264184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x264184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264188: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x264188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26418c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26418Cu;
    {
        const bool branch_taken_0x26418c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26418Cu;
        // 0x264190: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26418c) {
            ctx->pc = 0x2641D0u;
            goto label_2641d0;
        }
    }
    ctx->pc = 0x264194u;
    // 0x264194: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x264194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x264198: 0x34a57fff  ori         $a1, $a1, 0x7FFF
    ctx->pc = 0x264198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
    // 0x26419c: 0xc0990e2  jal         func_264388
    ctx->pc = 0x26419Cu;
    SET_GPR_U32(ctx, 31, 0x2641A4u);
    ctx->pc = 0x2641A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26419Cu;
    // 0x2641a0: 0xc52824  and         $a1, $a2, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264388u, 0x26419Cu, 0x2641A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2641A4u;
label_2641a4:
    // 0x2641a4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2641a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2641a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2641a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2641ac: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2641acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2641b0: 0x8c6401d8  lw          $a0, 0x1D8($v1)
    ctx->pc = 0x2641b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 472)));
    // 0x2641b4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2641b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2641b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2641b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2641bc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2641bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2641c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2641c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2641c4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2641C4u;
    {
        const bool branch_taken_0x2641c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2641C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641C4u;
        // 0x2641c8: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2641c4) {
            ctx->pc = 0x264240u;
            goto label_264240;
        }
    }
    ctx->pc = 0x2641CCu;
    // 0x2641cc: 0x0  nop
    ctx->pc = 0x2641ccu;
    // NOP
label_2641d0:
    // 0x2641d0: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x2641d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2641d4: 0x8c6201dc  lw          $v0, 0x1DC($v1)
    ctx->pc = 0x2641d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 476)));
    // 0x2641d8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2641d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2641dc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2641DCu;
    {
        const bool branch_taken_0x2641dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2641E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641DCu;
        // 0x2641e0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2641dc) {
            ctx->pc = 0x264228u;
            goto label_264228;
        }
    }
    ctx->pc = 0x2641E4u;
    // 0x2641e4: 0x8e07005c  lw          $a3, 0x5C($s0)
    ctx->pc = 0x2641e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2641e8: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x2641e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2641ec: 0x8ce200bc  lw          $v0, 0xBC($a3)
    ctx->pc = 0x2641ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 188)));
    // 0x2641f0: 0x8ca401dc  lw          $a0, 0x1DC($a1)
    ctx->pc = 0x2641f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 476)));
    // 0x2641f4: 0x8c4301dc  lw          $v1, 0x1DC($v0)
    ctx->pc = 0x2641f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 476)));
    // 0x2641f8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2641f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2641fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2641FCu;
    {
        const bool branch_taken_0x2641fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641FCu;
        // 0x264200: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2641fc) {
            ctx->pc = 0x264210u;
            goto label_264210;
        }
    }
    ctx->pc = 0x264204u;
    // 0x264204: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x264204u;
    {
        const bool branch_taken_0x264204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264204u;
        // 0x264208: 0x8ca301d8  lw          $v1, 0x1D8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264204) {
            ctx->pc = 0x26422Cu;
            goto label_26422c;
        }
    }
    ctx->pc = 0x26420Cu;
    // 0x26420c: 0x0  nop
    ctx->pc = 0x26420cu;
    // NOP
label_264210:
    // 0x264210: 0x8ce40050  lw          $a0, 0x50($a3)
    ctx->pc = 0x264210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x264214: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x264214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x264218: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x264218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26421c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26421Cu;
    {
        const bool branch_taken_0x26421c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26421Cu;
        // 0x264220: 0x8c8301d8  lw          $v1, 0x1D8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26421c) {
            ctx->pc = 0x264234u;
            goto label_264234;
        }
    }
    ctx->pc = 0x264224u;
    // 0x264224: 0x0  nop
    ctx->pc = 0x264224u;
    // NOP
label_264228:
    // 0x264228: 0x8c6301d8  lw          $v1, 0x1D8($v1)
    ctx->pc = 0x264228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 472)));
label_26422c:
    // 0x26422c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x26422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x264230: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x264230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_264234:
    // 0x264234: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x264234u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x264238: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x264238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26423c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26423cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_264240:
    // 0x264240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264244: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x264244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x264248: 0x3e00008  jr          $ra
    ctx->pc = 0x264248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264248u;
        // 0x26424c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264250u;
}
