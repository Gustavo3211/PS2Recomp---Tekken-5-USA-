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

// Function: sub_00264250
// Address: 0x264250 - 0x264328
void sub_00264250_0x264250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264250_0x264250");
#endif

    switch (ctx->pc) {
        case 0x264288u: goto label_264288;
        default: break;
    }

    ctx->pc = 0x264250u;

    // 0x264250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x264250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x264254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x264254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x264258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26425c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x26425cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x264260: 0x8e070050  lw          $a3, 0x50($s0)
    ctx->pc = 0x264260u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x264264: 0x8ce30178  lw          $v1, 0x178($a3)
    ctx->pc = 0x264264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x264268: 0xa33023  subu        $a2, $a1, $v1
    ctx->pc = 0x264268u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26426c: 0x30c28000  andi        $v0, $a2, 0x8000
    ctx->pc = 0x26426cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x264270: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x264270u;
    {
        const bool branch_taken_0x264270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264270u;
        // 0x264274: 0xa3182b  sltu        $v1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264270) {
            ctx->pc = 0x2642A8u;
            goto label_2642a8;
        }
    }
    ctx->pc = 0x264278u;
    // 0x264278: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x264278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x26427c: 0x34a57fff  ori         $a1, $a1, 0x7FFF
    ctx->pc = 0x26427cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
    // 0x264280: 0xc0990e2  jal         func_264388
    ctx->pc = 0x264280u;
    SET_GPR_U32(ctx, 31, 0x264288u);
    ctx->pc = 0x264284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264280u;
    // 0x264284: 0xc52824  and         $a1, $a2, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264388u, 0x264280u, 0x264288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264288u;
label_264288:
    // 0x264288: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x264288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x26428c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26428cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264290: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x264290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x264294: 0x8c6401d8  lw          $a0, 0x1D8($v1)
    ctx->pc = 0x264294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 472)));
    // 0x264298: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x264298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x26429c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26429cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2642a0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2642A0u;
    {
        const bool branch_taken_0x2642a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2642A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2642A0u;
        // 0x2642a4: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642a0) {
            ctx->pc = 0x2642F4u;
            goto label_2642f4;
        }
    }
    ctx->pc = 0x2642A8u;
label_2642a8:
    // 0x2642a8: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2642A8u;
    {
        const bool branch_taken_0x2642a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2642a8) {
            ctx->pc = 0x2642ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2642A8u;
            // 0x2642ac: 0x8ce201dc  lw          $v0, 0x1DC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2642D8u;
            goto label_2642d8;
        }
    }
    ctx->pc = 0x2642B0u;
    // 0x2642b0: 0x8ce2017c  lw          $v0, 0x17C($a3)
    ctx->pc = 0x2642b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 380)));
    // 0x2642b4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2642b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2642b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2642B8u;
    {
        const bool branch_taken_0x2642b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2642BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2642B8u;
        // 0x2642bc: 0x8ce201dc  lw          $v0, 0x1DC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642b8) {
            ctx->pc = 0x2642D8u;
            goto label_2642d8;
        }
    }
    ctx->pc = 0x2642C0u;
    // 0x2642c0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2642c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2642c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2642C4u;
    {
        const bool branch_taken_0x2642c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2642c4) {
            ctx->pc = 0x2642C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2642C4u;
            // 0x2642c8: 0x8ce201dc  lw          $v0, 0x1DC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2642D8u;
            goto label_2642d8;
        }
    }
    ctx->pc = 0x2642CCu;
    // 0x2642cc: 0x4c3000c  bgezl       $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2642CCu;
    {
        const bool branch_taken_0x2642cc = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x2642cc) {
            ctx->pc = 0x2642D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2642CCu;
            // 0x2642d0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264300u;
            goto label_264300;
        }
    }
    ctx->pc = 0x2642D4u;
    // 0x2642d4: 0x8ce201dc  lw          $v0, 0x1DC($a3)
    ctx->pc = 0x2642d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_2642d8:
    // 0x2642d8: 0x8ce401d8  lw          $a0, 0x1D8($a3)
    ctx->pc = 0x2642d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x2642dc: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x2642dcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2642e0: 0x1810  mfhi        $v1
    ctx->pc = 0x2642e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2642e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2642e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2642e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2642e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2642ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2642ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2642f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2642f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2642f4:
    // 0x2642f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2642f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2642f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2642F8u;
    {
        const bool branch_taken_0x2642f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2642FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2642F8u;
        // 0x2642fc: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642f8) {
            ctx->pc = 0x264318u;
            goto label_264318;
        }
    }
    ctx->pc = 0x264300u;
label_264300:
    // 0x264300: 0x8ce301d8  lw          $v1, 0x1D8($a3)
    ctx->pc = 0x264300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x264304: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x264304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x264308: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x264308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26430c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x26430cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x264310: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x264310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x264314: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x264314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_264318:
    // 0x264318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26431c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x26431cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x264320: 0x3e00008  jr          $ra
    ctx->pc = 0x264320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264320u;
        // 0x264324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264328u;
}
