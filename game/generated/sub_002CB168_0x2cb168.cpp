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

// Function: sub_002CB168
// Address: 0x2cb168 - 0x2cb430
void sub_002CB168_0x2cb168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB168_0x2cb168");
#endif

    switch (ctx->pc) {
        case 0x2cb1c4u: goto label_2cb1c4;
        case 0x2cb280u: goto label_2cb280;
        case 0x2cb30cu: goto label_2cb30c;
        case 0x2cb398u: goto label_2cb398;
        case 0x2cb3c4u: goto label_2cb3c4;
        case 0x2cb3e0u: goto label_2cb3e0;
        case 0x2cb400u: goto label_2cb400;
        default: break;
    }

    ctx->pc = 0x2cb168u;

    // 0x2cb168: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2cb168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x2cb16c: 0xffb40180  sd          $s4, 0x180($sp)
    ctx->pc = 0x2cb16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 20));
    // 0x2cb170: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2cb170u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb174: 0xffb60190  sd          $s6, 0x190($sp)
    ctx->pc = 0x2cb174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 22));
    // 0x2cb178: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2cb178u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb17c: 0xffbe01a0  sd          $fp, 0x1A0($sp)
    ctx->pc = 0x2cb17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 30));
    // 0x2cb180: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2cb180u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb184: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x2cb184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
    // 0x2cb188: 0xffb10168  sd          $s1, 0x168($sp)
    ctx->pc = 0x2cb188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 17));
    // 0x2cb18c: 0xffb20170  sd          $s2, 0x170($sp)
    ctx->pc = 0x2cb18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 18));
    // 0x2cb190: 0xffb30178  sd          $s3, 0x178($sp)
    ctx->pc = 0x2cb190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 19));
    // 0x2cb194: 0xffb50188  sd          $s5, 0x188($sp)
    ctx->pc = 0x2cb194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 21));
    // 0x2cb198: 0xffb70198  sd          $s7, 0x198($sp)
    ctx->pc = 0x2cb198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 23));
    // 0x2cb19c: 0xffbf01a8  sd          $ra, 0x1A8($sp)
    ctx->pc = 0x2cb19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 31));
    // 0x2cb1a0: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x2cb1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2cb1a4: 0x10800096  beqz        $a0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2CB1A4u;
    {
        const bool branch_taken_0x2cb1a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1A4u;
        // 0x2cb1a8: 0xafa00150  sw          $zero, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1a4) {
            ctx->pc = 0x2CB400u;
            goto label_2cb400;
        }
    }
    ctx->pc = 0x2CB1ACu;
    // 0x2cb1ac: 0x87c30040  lh          $v1, 0x40($fp)
    ctx->pc = 0x2cb1acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x2cb1b0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2cb1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2cb1b4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB1B4u;
    {
        const bool branch_taken_0x2cb1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CB1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1B4u;
        // 0x2cb1b8: 0x97c40040  lhu         $a0, 0x40($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1b4) {
            ctx->pc = 0x2CB1D4u;
            goto label_2cb1d4;
        }
    }
    ctx->pc = 0x2CB1BCu;
    // 0x2cb1bc: 0xc0863a4  jal         func_218E90
    ctx->pc = 0x2CB1BCu;
    SET_GPR_U32(ctx, 31, 0x2CB1C4u);
    ctx->pc = 0x2CB1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB1BCu;
    // 0x2cb1c0: 0x87c40042  lh          $a0, 0x42($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E90u, 0x2CB1BCu, 0x2CB1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB1C4u;
label_2cb1c4:
    // 0x2cb1c4: 0x97c40040  lhu         $a0, 0x40($fp)
    ctx->pc = 0x2cb1c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x2cb1c8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cb1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2cb1cc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2cb1ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2cb1d0: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x2cb1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_2cb1d4:
    // 0x2cb1d4: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x2cb1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2cb1d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2cb1d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2cb1dc: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x2cb1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x2cb1e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2cb1e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2cb1e4: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x2cb1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x2cb1e8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2cb1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2cb1ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB1ECu;
    {
        const bool branch_taken_0x2cb1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1ECu;
        // 0x2cb1f0: 0x27c20870  addiu       $v0, $fp, 0x870 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 2160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1ec) {
            ctx->pc = 0x2CB200u;
            goto label_2cb200;
        }
    }
    ctx->pc = 0x2CB1F4u;
    // 0x2cb1f4: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x2cb1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x2cb1f8: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x2CB1F8u;
    {
        const bool branch_taken_0x2cb1f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1F8u;
        // 0x2cb1fc: 0xdfb00160  ld          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1f8) {
            ctx->pc = 0x2CB404u;
            goto label_2cb404;
        }
    }
    ctx->pc = 0x2CB200u;
label_2cb200:
    // 0x2cb200: 0x27c30868  addiu       $v1, $fp, 0x868
    ctx->pc = 0x2cb200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 2152));
    // 0x2cb204: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x2cb204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x2cb208: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x2cb208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x2cb20c: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x2cb20cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cb210: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2cb210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2cb214: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB214u;
    {
        const bool branch_taken_0x2cb214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB214u;
        // 0x2cb218: 0x8fa20158  lw          $v0, 0x158($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb214) {
            ctx->pc = 0x2CB228u;
            goto label_2cb228;
        }
    }
    ctx->pc = 0x2CB21Cu;
    // 0x2cb21c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB21Cu;
    {
        const bool branch_taken_0x2cb21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB21Cu;
        // 0x2cb220: 0x8c750004  lw          $s5, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb21c) {
            ctx->pc = 0x2CB22Cu;
            goto label_2cb22c;
        }
    }
    ctx->pc = 0x2CB224u;
    // 0x2cb224: 0x0  nop
    ctx->pc = 0x2cb224u;
    // NOP
label_2cb228:
    // 0x2cb228: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x2cb228u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb22c:
    // 0x2cb22c: 0x12a00075  beqz        $s5, . + 4 + (0x75 << 2)
    ctx->pc = 0x2CB22Cu;
    {
        const bool branch_taken_0x2cb22c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB22Cu;
        // 0x2cb230: 0xdfb00160  ld          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb22c) {
            ctx->pc = 0x2CB404u;
            goto label_2cb404;
        }
    }
    ctx->pc = 0x2CB234u;
    // 0x2cb234: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x2cb234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2cb238: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2CB238u;
    {
        const bool branch_taken_0x2cb238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB238u;
        // 0x2cb23c: 0x8fa30150  lw          $v1, 0x150($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb238) {
            ctx->pc = 0x2CB404u;
            goto label_2cb404;
        }
    }
    ctx->pc = 0x2CB240u;
    // 0x2cb240: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB240u;
    {
        const bool branch_taken_0x2cb240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB240u;
        // 0x2cb244: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb240) {
            ctx->pc = 0x2CB258u;
            goto label_2cb258;
        }
    }
    ctx->pc = 0x2CB248u;
    // 0x2cb248: 0x1444006f  bne         $v0, $a0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2CB248u;
    {
        const bool branch_taken_0x2cb248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2CB24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB248u;
        // 0x2cb24c: 0xdfb10168  ld          $s1, 0x168($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb248) {
            ctx->pc = 0x2CB408u;
            goto label_2cb408;
        }
    }
    ctx->pc = 0x2CB250u;
    // 0x2cb250: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CB250u;
    {
        const bool branch_taken_0x2cb250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB250u;
        // 0x2cb254: 0x8fa20154  lw          $v0, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb250) {
            ctx->pc = 0x2CB25Cu;
            goto label_2cb25c;
        }
    }
    ctx->pc = 0x2CB258u;
label_2cb258:
    // 0x2cb258: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x2cb258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_2cb25c:
    // 0x2cb25c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB25Cu;
    {
        const bool branch_taken_0x2cb25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB25Cu;
        // 0x2cb260: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb25c) {
            ctx->pc = 0x2CB270u;
            goto label_2cb270;
        }
    }
    ctx->pc = 0x2CB264u;
    // 0x2cb264: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x2cb264u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2cb268: 0x14620066  bne         $v1, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x2CB268u;
    {
        const bool branch_taken_0x2cb268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CB26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB268u;
        // 0x2cb26c: 0xdfb00160  ld          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb268) {
            ctx->pc = 0x2CB404u;
            goto label_2cb404;
        }
    }
    ctx->pc = 0x2CB270u;
label_2cb270:
    // 0x2cb270: 0x1880003c  blez        $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2CB270u;
    {
        const bool branch_taken_0x2cb270 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2CB274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB270u;
        // 0x2cb274: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb270) {
            ctx->pc = 0x2CB364u;
            goto label_2cb364;
        }
    }
    ctx->pc = 0x2CB278u;
    // 0x2cb278: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2cb278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2cb27c: 0x0  nop
    ctx->pc = 0x2cb27cu;
    // NOP
label_2cb280:
    // 0x2cb280: 0x171040  sll         $v0, $s7, 1
    ctx->pc = 0x2cb280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x2cb284: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x2cb284u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2cb288: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x2cb288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x2cb28c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cb28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cb290: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2cb290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2cb294: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x2cb294u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cb298: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2cb298u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2cb29c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x2cb29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2cb2a0: 0x68040  sll         $s0, $a2, 1
    ctx->pc = 0x2cb2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2cb2a4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2cb2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2cb2a8: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x2cb2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2cb2ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2cb2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb2b0: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x2cb2b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2cb2b4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2cb2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2cb2b8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2cb2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2cb2bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cb2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cb2c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cb2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb2c4: 0x26110001  addiu       $s1, $s0, 0x1
    ctx->pc = 0x2cb2c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cb2c8: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x2cb2c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cb2cc: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x2cb2ccu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2cb2d0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2cb2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2cb2d4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2cb2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2cb2d8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2cb2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2cb2dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2cb2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb2e0: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x2cb2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2cb2e4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2cb2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2cb2e8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2cb2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2cb2ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cb2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb2f0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2cb2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2cb2f4: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x2cb2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2cb2f8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2cb2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2cb2fc: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x2cb2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2cb300: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2cb300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb304: 0xc0b7478  jal         func_2DD1E0
    ctx->pc = 0x2CB304u;
    SET_GPR_U32(ctx, 31, 0x2CB30Cu);
    ctx->pc = 0x2CB308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB304u;
    // 0x2cb308: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD1E0u, 0x2CB304u, 0x2CB30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB30Cu;
label_2cb30c:
    // 0x2cb30c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2cb30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2cb310: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2cb310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2cb314: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cb314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb318: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2cb318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2cb31c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2cb31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb320: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x2cb320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x2cb324: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2cb324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2cb328: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2cb328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2cb32c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cb32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb330: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2cb330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2cb334: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2cb334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb338: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x2cb338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x2cb33c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2cb33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2cb340: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2cb340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2cb344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cb344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb348: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2cb348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2cb34c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2cb34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb350: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x2cb350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x2cb354: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2cb354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2cb358: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x2cb358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cb35c: 0x5440ffc8  bnel        $v0, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x2CB35Cu;
    {
        const bool branch_taken_0x2cb35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb35c) {
            ctx->pc = 0x2CB360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB35Cu;
            // 0x2cb360: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb280;
        }
    }
    ctx->pc = 0x2CB364u;
label_2cb364:
    // 0x2cb364: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x2cb364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2cb368: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2cb368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2cb36c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2CB36Cu;
    {
        const bool branch_taken_0x2cb36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB36Cu;
        // 0x2cb370: 0x8fa2015c  lw          $v0, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb36c) {
            ctx->pc = 0x2CB400u;
            goto label_2cb400;
        }
    }
    ctx->pc = 0x2CB374u;
    // 0x2cb374: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2cb374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cb378: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb37c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cb37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb380: 0x94460004  lhu         $a2, 0x4($v0)
    ctx->pc = 0x2cb380u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cb384: 0x26b00006  addiu       $s0, $s5, 0x6
    ctx->pc = 0x2cb384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
    // 0x2cb388: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2cb388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cb38c: 0x30c63fff  andi        $a2, $a2, 0x3FFF
    ctx->pc = 0x2cb38cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2cb390: 0xc0b1cd2  jal         func_2C7348
    ctx->pc = 0x2CB390u;
    SET_GPR_U32(ctx, 31, 0x2CB398u);
    ctx->pc = 0x2CB394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB390u;
    // 0x2cb394: 0x96b10004  lhu         $s1, 0x4($s5) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7348u, 0x2CB390u, 0x2CB398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB398u;
label_2cb398:
    // 0x2cb398: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cb398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb39c: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x2cb39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2cb3a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cb3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb3a4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2cb3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb3a8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2cb3a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb3ac: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x2cb3acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cb3b0: 0x8fc20894  lw          $v0, 0x894($fp)
    ctx->pc = 0x2cb3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2196)));
    // 0x2cb3b4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2cb3b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cb3b8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2cb3b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2cb3bc: 0xc0b2af2  jal         func_2CABC8
    ctx->pc = 0x2CB3BCu;
    SET_GPR_U32(ctx, 31, 0x2CB3C4u);
    ctx->pc = 0x2CB3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB3BCu;
    // 0x2cb3c0: 0x8c460048  lw          $a2, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC8u, 0x2CB3BCu, 0x2CB3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB3C4u;
label_2cb3c4:
    // 0x2cb3c4: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x2cb3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2cb3c8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB3C8u;
    {
        const bool branch_taken_0x2cb3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3C8u;
        // 0x2cb3cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb3c8) {
            ctx->pc = 0x2CB3E8u;
            goto label_2cb3e8;
        }
    }
    ctx->pc = 0x2CB3D0u;
    // 0x2cb3d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cb3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb3d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cb3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb3d8: 0xc0b2b40  jal         func_2CAD00
    ctx->pc = 0x2CB3D8u;
    SET_GPR_U32(ctx, 31, 0x2CB3E0u);
    ctx->pc = 0x2CB3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB3D8u;
    // 0x2cb3dc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAD00u, 0x2CB3D8u, 0x2CB3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB3E0u;
label_2cb3e0:
    // 0x2cb3e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CB3E0u;
    {
        const bool branch_taken_0x2cb3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3E0u;
        // 0x2cb3e4: 0xdfb00160  ld          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb3e0) {
            ctx->pc = 0x2CB404u;
            goto label_2cb404;
        }
    }
    ctx->pc = 0x2CB3E8u;
label_2cb3e8:
    // 0x2cb3e8: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x2cb3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x2cb3ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB3ECu;
    {
        const bool branch_taken_0x2cb3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3ECu;
        // 0x2cb3f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb3ec) {
            ctx->pc = 0x2CB400u;
            goto label_2cb400;
        }
    }
    ctx->pc = 0x2CB3F4u;
    // 0x2cb3f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cb3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb3f8: 0xc0b2baa  jal         func_2CAEA8
    ctx->pc = 0x2CB3F8u;
    SET_GPR_U32(ctx, 31, 0x2CB400u);
    ctx->pc = 0x2CB3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB3F8u;
    // 0x2cb3fc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAEA8u, 0x2CB3F8u, 0x2CB400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB400u;
label_2cb400:
    // 0x2cb400: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x2cb400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_2cb404:
    // 0x2cb404: 0xdfb10168  ld          $s1, 0x168($sp)
    ctx->pc = 0x2cb404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 360)));
label_2cb408:
    // 0x2cb408: 0xdfb20170  ld          $s2, 0x170($sp)
    ctx->pc = 0x2cb408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2cb40c: 0xdfb30178  ld          $s3, 0x178($sp)
    ctx->pc = 0x2cb40cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2cb410: 0xdfb40180  ld          $s4, 0x180($sp)
    ctx->pc = 0x2cb410u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2cb414: 0xdfb50188  ld          $s5, 0x188($sp)
    ctx->pc = 0x2cb414u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x2cb418: 0xdfb60190  ld          $s6, 0x190($sp)
    ctx->pc = 0x2cb418u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2cb41c: 0xdfb70198  ld          $s7, 0x198($sp)
    ctx->pc = 0x2cb41cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2cb420: 0xdfbe01a0  ld          $fp, 0x1A0($sp)
    ctx->pc = 0x2cb420u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2cb424: 0xdfbf01a8  ld          $ra, 0x1A8($sp)
    ctx->pc = 0x2cb424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2cb428: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB428u;
        // 0x2cb42c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB430u;
}
