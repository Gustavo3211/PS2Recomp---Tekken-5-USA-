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

// Function: sub_00508148
// Address: 0x508148 - 0x508488
void sub_00508148_0x508148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00508148_0x508148");
#endif

    switch (ctx->pc) {
        case 0x5081d0u: goto label_5081d0;
        case 0x50821cu: goto label_50821c;
        case 0x50836cu: goto label_50836c;
        case 0x5083ccu: goto label_5083cc;
        default: break;
    }

    ctx->pc = 0x508148u;

    // 0x508148: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x508148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x50814c: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x50814cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x508150: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x508150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x508154: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x508154u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x508158: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x508158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x50815c: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x50815cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x508160: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x508160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x508164: 0x27b30008  addiu       $s3, $sp, 0x8
    ctx->pc = 0x508164u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x508168: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x508168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x50816c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x50816cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x508170: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x508170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x508174: 0x7ac03  sra         $s5, $a3, 16
    ctx->pc = 0x508174u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 7), 16));
    // 0x508178: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x508178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x50817c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x50817cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x508180: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x508180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x508184: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x508184u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x508188: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x508188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x50818c: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x50818cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x508190: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x508190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x508194: 0x64400  sll         $t0, $a2, 16
    ctx->pc = 0x508194u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x508198: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x508198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x50819c: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x50819cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x5081a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x5081a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5081a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x5081a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5081a8: 0x8ec90000  lw          $t1, 0x0($s6)
    ctx->pc = 0x5081a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x5081ac: 0x39403  sra         $s2, $v1, 16
    ctx->pc = 0x5081acu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 16));
    // 0x5081b0: 0x8eeb0000  lw          $t3, 0x0($s7)
    ctx->pc = 0x5081b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x5081b4: 0x8a403  sra         $s4, $t0, 16
    ctx->pc = 0x5081b4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), 16));
    // 0x5081b8: 0x8fca0000  lw          $t2, 0x0($fp)
    ctx->pc = 0x5081b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x5081bc: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x5081bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x5081c0: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x5081c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x5081c4: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x5081c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x5081c8: 0xc1413da  jal         func_504F68
    ctx->pc = 0x5081C8u;
    SET_GPR_U32(ctx, 31, 0x5081D0u);
    ctx->pc = 0x5081CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5081C8u;
    // 0x5081cc: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504F68u, 0x5081C8u, 0x5081D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5081D0u;
label_5081d0:
    // 0x5081d0: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x5081D0u;
    {
        const bool branch_taken_0x5081d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5081D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5081D0u;
        // 0x5081d4: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5081d0) {
            ctx->pc = 0x508440u;
            goto label_508440;
        }
    }
    ctx->pc = 0x5081D8u;
    // 0x5081d8: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x5081d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x5081dc: 0x2111025  or          $v0, $s0, $s1
    ctx->pc = 0x5081dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x5081e0: 0x27a6000c  addiu       $a2, $sp, 0xC
    ctx->pc = 0x5081e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x5081e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5081e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5081e8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x5081e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5081ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5081ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5081f0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x5081f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5081f4: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x5081f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x5081f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5081f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5081fc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x5081fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x508200: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x508200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x508204: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x508204u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x508208: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x508208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x50820c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50820cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x508210: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x508210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x508214: 0xc141452  jal         func_505148
    ctx->pc = 0x508214u;
    SET_GPR_U32(ctx, 31, 0x50821Cu);
    ctx->pc = 0x508218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x508214u;
    // 0x508218: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x505148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505148u, 0x508214u, 0x50821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50821Cu;
label_50821c:
    // 0x50821c: 0x97a5000c  lhu         $a1, 0xC($sp)
    ctx->pc = 0x50821cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x508220: 0x2511825  or          $v1, $s2, $s1
    ctx->pc = 0x508220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 17));
    // 0x508224: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x508224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x508228: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x508228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x50822c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x50822Cu;
    {
        const bool branch_taken_0x50822c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x508230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50822Cu;
        // 0x508230: 0x3066ffff  andi        $a2, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x50822c) {
            ctx->pc = 0x508264u;
            goto label_508264;
        }
    }
    ctx->pc = 0x508234u;
    // 0x508234: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x508234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x508238: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x508238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x50823c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50823cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x508240: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x508240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x508244: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x508244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x508248: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x508248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x50824c: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x50824cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x508250: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x508250u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x508254: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x508254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x508258: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x508258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x50825c: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x50825cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x508260: 0x97a5000c  lhu         $a1, 0xC($sp)
    ctx->pc = 0x508260u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
label_508264:
    // 0x508264: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x508264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x508268: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x508268u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50826c: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x50826cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x508270: 0x34c3ffff  ori         $v1, $a2, 0xFFFF
    ctx->pc = 0x508270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x508274: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x508274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x508278: 0xf11025  or          $v0, $a3, $s1
    ctx->pc = 0x508278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x50827c: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x50827cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x508280: 0x24a50176  addiu       $a1, $a1, 0x176
    ctx->pc = 0x508280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 374));
    // 0x508284: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x508284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x508288: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x508288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x50828c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50828cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x508290: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x508290u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x508294: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x508294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x508298: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x508298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x50829c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x50829cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x5082a0: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x5082a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x5082a4: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x5082a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x5082a8: 0x34c3ffff  ori         $v1, $a2, 0xFFFF
    ctx->pc = 0x5082a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x5082ac: 0x30c47fff  andi        $a0, $a2, 0x7FFF
    ctx->pc = 0x5082acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x5082b0: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x5082b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5082b4: 0x833024  and         $a2, $a0, $v1
    ctx->pc = 0x5082b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x5082b8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x5082b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x5082bc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x5082bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x5082c0: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x5082c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x5082c4: 0x460005e  bltz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x5082C4u;
    {
        const bool branch_taken_0x5082c4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x5082C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5082C4u;
        // 0x5082c8: 0x24e20256  addiu       $v0, $a3, 0x256 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 598));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5082c4) {
            ctx->pc = 0x508440u;
            goto label_508440;
        }
    }
    ctx->pc = 0x5082CCu;
    // 0x5082cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x5082ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x5082d0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x5082d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x5082d4: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x5082D4u;
    {
        const bool branch_taken_0x5082d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5082D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5082D4u;
        // 0x5082d8: 0x8fab0004  lw          $t3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5082d4) {
            ctx->pc = 0x508444u;
            goto label_508444;
        }
    }
    ctx->pc = 0x5082DCu;
    // 0x5082dc: 0x87a40004  lh          $a0, 0x4($sp)
    ctx->pc = 0x5082dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x5082e0: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x5082e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x5082e4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x5082e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x5082e8: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x5082e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x5082ec: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x5082ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x5082f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5082f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5082f4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x5082f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x5082f8: 0x625824  and         $t3, $v1, $v0
    ctx->pc = 0x5082f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5082fc: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x5082fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x508300: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x508300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x508304: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x508304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x508308: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x508308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x50830c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50830cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x508310: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x508310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x508314: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x508314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x508318: 0x822824  and         $a1, $a0, $v0
    ctx->pc = 0x508318u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50831c: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x50831cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x508320: 0x4600048  bltz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x508320u;
    {
        const bool branch_taken_0x508320 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x508324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508320u;
        // 0x508324: 0xafab0004  sw          $t3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508320) {
            ctx->pc = 0x508444u;
            goto label_508444;
        }
    }
    ctx->pc = 0x508328u;
    // 0x508328: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x508328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50832c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x50832cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x508330: 0x304201f0  andi        $v0, $v0, 0x1F0
    ctx->pc = 0x508330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)496);
    // 0x508334: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x508334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x508338: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x508338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x50833c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x50833cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x508340: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x508340u;
    {
        const bool branch_taken_0x508340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x508344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508340u;
        // 0x508344: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508340) {
            ctx->pc = 0x508448u;
            goto label_508448;
        }
    }
    ctx->pc = 0x508348u;
    // 0x508348: 0x3c130090  lui         $s3, 0x90
    ctx->pc = 0x508348u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)144 << 16));
    // 0x50834c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x50834cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x508350: 0x2662f080  addiu       $v0, $s3, -0xF80
    ctx->pc = 0x508350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963328));
    // 0x508354: 0x8c500054  lw          $s0, 0x54($v0)
    ctx->pc = 0x508354u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x8FF0D4u));
    // 0x508358: 0x24520050  addiu       $s2, $v0, 0x50
    ctx->pc = 0x508358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x50835c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x50835cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8FF0D0u));
    // 0x508360: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x508360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x508364: 0xc14481c  jal         func_512070
    ctx->pc = 0x508364u;
    SET_GPR_U32(ctx, 31, 0x50836Cu);
    ctx->pc = 0x508368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x508364u;
    // 0x508368: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x508364u, 0x50836Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50836Cu;
label_50836c:
    // 0x50836c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50836cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x508370: 0x14430034  bne         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x508370u;
    {
        const bool branch_taken_0x508370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x508374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508370u;
        // 0x508374: 0x8fab0004  lw          $t3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508370) {
            ctx->pc = 0x508444u;
            goto label_508444;
        }
    }
    ctx->pc = 0x508378u;
    // 0x508378: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x508378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50837c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x50837cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x508380: 0xa6140000  sh          $s4, 0x0($s0)
    ctx->pc = 0x508380u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 20));
    // 0x508384: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x508384u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x508388: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x508388u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x50838c: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x50838cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x508390: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x508390u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x508394: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x508394u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x508398: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x508398u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x50839c: 0x97a3000c  lhu         $v1, 0xC($sp)
    ctx->pc = 0x50839cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x5083a0: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x5083A0u;
    {
        const bool branch_taken_0x5083a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x5083A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5083A0u;
        // 0x5083a4: 0xa603000a  sh          $v1, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5083a0) {
            ctx->pc = 0x5083C0u;
            goto label_5083c0;
        }
    }
    ctx->pc = 0x5083A8u;
    // 0x5083a8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x5083a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5083ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x5083acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x5083b0: 0x34420030  ori         $v0, $v0, 0x30
    ctx->pc = 0x5083b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x5083b4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x5083B4u;
    {
        const bool branch_taken_0x5083b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5083B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5083B4u;
        // 0x5083b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5083b4) {
            ctx->pc = 0x50841Cu;
            goto label_50841c;
        }
    }
    ctx->pc = 0x5083BCu;
    // 0x5083bc: 0x0  nop
    ctx->pc = 0x5083bcu;
    // NOP
label_5083c0:
    // 0x5083c0: 0x87a50008  lh          $a1, 0x8($sp)
    ctx->pc = 0x5083c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5083c4: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x5083C4u;
    SET_GPR_U32(ctx, 31, 0x5083CCu);
    ctx->pc = 0x5083C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5083C4u;
    // 0x5083c8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x5083C4u, 0x5083CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5083CCu;
label_5083cc:
    // 0x5083cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x5083ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5083d0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x5083d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x5083d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5083d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5083d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5083d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5083dc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x5083dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x5083e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5083e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5083e4: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x5083e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5083e8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x5083e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x5083ec: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x5083ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x5083f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5083f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5083f4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x5083f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x5083f8: 0x87a20008  lh          $v0, 0x8($sp)
    ctx->pc = 0x5083f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5083fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5083FCu;
    {
        const bool branch_taken_0x5083fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x508400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5083FCu;
        // 0x508400: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5083fc) {
            ctx->pc = 0x508410u;
            goto label_508410;
        }
    }
    ctx->pc = 0x508404u;
    // 0x508404: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x508404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x508408: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x508408u;
    {
        const bool branch_taken_0x508408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508408u;
        // 0x50840c: 0x511025  or          $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508408) {
            ctx->pc = 0x50841Cu;
            goto label_50841c;
        }
    }
    ctx->pc = 0x508410u;
label_508410:
    // 0x508410: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x508410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x508414: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x508414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x508418: 0x34420030  ori         $v0, $v0, 0x30
    ctx->pc = 0x508418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
label_50841c:
    // 0x50841c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50841cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x508420: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x508420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x508424: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x508424u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x508428: 0x2663f080  addiu       $v1, $s3, -0xF80
    ctx->pc = 0x508428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963328));
    // 0x50842c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x50842cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x508430: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x508430u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x508434: 0xa604000e  sh          $a0, 0xE($s0)
    ctx->pc = 0x508434u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x508438: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x508438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x50843c: 0xac700054  sw          $s0, 0x54($v1)
    ctx->pc = 0x50843cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 16));
label_508440:
    // 0x508440: 0x8fab0004  lw          $t3, 0x4($sp)
    ctx->pc = 0x508440u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_508444:
    // 0x508444: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x508444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_508448:
    // 0x508448: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x508448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50844c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x50844cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x508450: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x508450u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x508454: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x508454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x508458: 0xaeeb0000  sw          $t3, 0x0($s7)
    ctx->pc = 0x508458u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 11));
    // 0x50845c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x50845cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x508460: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x508460u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x508464: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x508464u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x508468: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x508468u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x50846c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x50846cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x508470: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x508470u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x508474: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x508474u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x508478: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x508478u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x50847c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x50847cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x508480: 0x3e00008  jr          $ra
    ctx->pc = 0x508480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508480u;
        // 0x508484: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x508480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x508488u;
}
