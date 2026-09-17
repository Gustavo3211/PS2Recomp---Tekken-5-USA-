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

// Function: sub_00106198
// Address: 0x106198 - 0x1068a0
void sub_00106198_0x106198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106198_0x106198");
#endif

    switch (ctx->pc) {
        case 0x1062b4u: goto label_1062b4;
        case 0x1062f4u: goto label_1062f4;
        case 0x106320u: goto label_106320;
        case 0x106360u: goto label_106360;
        case 0x10639cu: goto label_10639c;
        case 0x1063dcu: goto label_1063dc;
        case 0x106424u: goto label_106424;
        case 0x106528u: goto label_106528;
        case 0x1065c8u: goto label_1065c8;
        case 0x106610u: goto label_106610;
        case 0x106660u: goto label_106660;
        case 0x106678u: goto label_106678;
        case 0x10671cu: goto label_10671c;
        case 0x10675cu: goto label_10675c;
        case 0x1067b4u: goto label_1067b4;
        case 0x10680cu: goto label_10680c;
        case 0x106854u: goto label_106854;
        case 0x10686cu: goto label_10686c;
        default: break;
    }

    ctx->pc = 0x106198u;

    // 0x106198: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x106198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x10619c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x10619cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1061a0: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x1061a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x1061a4: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x1061a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x1061a8: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x1061a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061ac: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x1061acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x1061b0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1061b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061b4: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1061b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x1061b8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1061b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061bc: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x1061bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x1061c0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1061c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061c4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1061c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1061c8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1061c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1061cc: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x1061ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x1061d0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1061d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061d4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1061d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1061d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1061d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061dc: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1061dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1061e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1061e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061e4: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x1061e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x1061e8: 0x8e220820  lw          $v0, 0x820($s1)
    ctx->pc = 0x1061e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
    // 0x1061ec: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x1061ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x1061f0: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1061f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1061f4: 0x30ec0008  andi        $t4, $a3, 0x8
    ctx->pc = 0x1061f4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x1061f8: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1061f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1061fc: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1061FCu;
    {
        const bool branch_taken_0x1061fc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x106200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061FCu;
        // 0x106200: 0xac4006cc  sw          $zero, 0x6CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061fc) {
            ctx->pc = 0x106214u;
            goto label_106214;
        }
    }
    ctx->pc = 0x106204u;
    // 0x106204: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x106204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x106208: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x106208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10620c: 0x1462011c  bne         $v1, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x10620Cu;
    {
        const bool branch_taken_0x10620c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x106210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10620Cu;
        // 0x106210: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10620c) {
            ctx->pc = 0x106680u;
            goto label_106680;
        }
    }
    ctx->pc = 0x106214u;
label_106214:
    // 0x106214: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x106214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x106218: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x106218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10621c: 0x14620083  bne         $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x10621Cu;
    {
        const bool branch_taken_0x10621c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x106220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10621Cu;
        // 0x106220: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10621c) {
            ctx->pc = 0x10642Cu;
            goto label_10642c;
        }
    }
    ctx->pc = 0x106224u;
    // 0x106224: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x106224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106228: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106228u;
    {
        const bool branch_taken_0x106228 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x106228) {
            ctx->pc = 0x10622Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106228u;
            // 0x10622c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10623Cu;
            goto label_10623c;
        }
    }
    ctx->pc = 0x106230u;
    // 0x106230: 0x1580000f  bnez        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x106230u;
    {
        const bool branch_taken_0x106230 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x106230) {
            ctx->pc = 0x106270u;
            goto label_106270;
        }
    }
    ctx->pc = 0x106238u;
    // 0x106238: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x106238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_10623c:
    // 0x10623c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10623cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106240: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x106240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x106244: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106248: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x106248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x10624c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10624cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106250: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x106250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x106254: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106258: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x106258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x10625c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x10625cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x106260: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x106260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x106264: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106264u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106268: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x106268u;
    {
        const bool branch_taken_0x106268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106268u;
        // 0x10626c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106268) {
            ctx->pc = 0x106658u;
            goto label_106658;
        }
    }
    ctx->pc = 0x106270u;
label_106270:
    // 0x106270: 0x16930022  bne         $s4, $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x106270u;
    {
        const bool branch_taken_0x106270 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x106274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106270u;
        // 0x106274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106270) {
            ctx->pc = 0x1062FCu;
            goto label_1062fc;
        }
    }
    ctx->pc = 0x106278u;
    // 0x106278: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x106278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x10627c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x10627cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106280: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106284: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x106284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x106288: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x106288u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10628c: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x10628cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x106290: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106290u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106294: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x106294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x106298: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x106298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10629c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10629cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1062a0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1062a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062a4: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x1062a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x1062a8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1062a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062ac: 0xc041abc  jal         func_106AF0
    ctx->pc = 0x1062ACu;
    SET_GPR_U32(ctx, 31, 0x1062B4u);
    ctx->pc = 0x1062B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1062ACu;
    // 0x1062b0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106AF0u, 0x1062ACu, 0x1062B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1062B4u;
label_1062b4:
    // 0x1062b4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1062b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1062b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1062b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062bc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1062bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1062c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1062c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1062c4: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x1062c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x1062c8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1062c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1062cc: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x1062ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1062d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1062d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062d4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1062d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1062d8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1062d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1062dc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1062dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1062e0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1062e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062e4: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x1062e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x1062e8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1062e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062ec: 0xc041abc  jal         func_106AF0
    ctx->pc = 0x1062ECu;
    SET_GPR_U32(ctx, 31, 0x1062F4u);
    ctx->pc = 0x1062F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1062ECu;
    // 0x1062f0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106AF0u, 0x1062ECu, 0x1062F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1062F4u;
label_1062f4:
    // 0x1062f4: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x1062F4u;
    {
        const bool branch_taken_0x1062f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062F4u;
        // 0x1062f8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062f4) {
            ctx->pc = 0x10667Cu;
            goto label_10667c;
        }
    }
    ctx->pc = 0x1062FCu;
label_1062fc:
    // 0x1062fc: 0x16830045  bne         $s4, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1062FCu;
    {
        const bool branch_taken_0x1062fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x106300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062FCu;
        // 0x106300: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062fc) {
            ctx->pc = 0x106414u;
            goto label_106414;
        }
    }
    ctx->pc = 0x106304u;
    // 0x106304: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x106304u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x106308: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x106308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10630c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x10630cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106314: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x106314u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x106318: 0xc041804  jal         func_106010
    ctx->pc = 0x106318u;
    SET_GPR_U32(ctx, 31, 0x106320u);
    ctx->pc = 0x10631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106318u;
    // 0x10631c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106010u, 0x106318u, 0x106320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106320u;
label_106320:
    // 0x106320: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x106320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x106324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106328: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x106328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10632c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10632cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106330: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x106330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x106334: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x106334u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x106338: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x106338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x10633c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10633cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106340: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x106340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x106344: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106348: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x106348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x10634c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x10634cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x106350: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x106350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x106354: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106354u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106358: 0xc041abc  jal         func_106AF0
    ctx->pc = 0x106358u;
    SET_GPR_U32(ctx, 31, 0x106360u);
    ctx->pc = 0x10635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106358u;
    // 0x10635c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106AF0u, 0x106358u, 0x106360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106360u;
label_106360:
    // 0x106360: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x106360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106368: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x106368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10636c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10636cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106370: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x106370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x106374: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106378: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x106378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10637c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10637cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106380: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x106380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x106384: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x106384u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x106388: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x106388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x10638c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x10638cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106390: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x106390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x106394: 0xc041abc  jal         func_106AF0
    ctx->pc = 0x106394u;
    SET_GPR_U32(ctx, 31, 0x10639Cu);
    ctx->pc = 0x106398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106394u;
    // 0x106398: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106AF0u, 0x106394u, 0x10639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10639Cu;
label_10639c:
    // 0x10639c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x10639cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1063a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1063a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1063a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1063a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1063a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1063ac: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x1063acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x1063b0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1063b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1063b4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1063b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1063b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1063b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1063bc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1063bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1063c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1063c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063c4: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1063c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1063c8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1063c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1063cc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1063ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1063d0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1063d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063d4: 0xc041abc  jal         func_106AF0
    ctx->pc = 0x1063D4u;
    SET_GPR_U32(ctx, 31, 0x1063DCu);
    ctx->pc = 0x1063D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1063D4u;
    // 0x1063d8: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106AF0u, 0x1063D4u, 0x1063DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1063DCu;
label_1063dc:
    // 0x1063dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1063dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1063e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1063e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063e4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1063e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1063e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1063e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063ec: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x1063ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x1063f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1063f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1063f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1063f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1063f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1063f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063fc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1063fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x106400: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x106400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x106404: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x106404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x106408: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106408u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10640c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x10640Cu;
    {
        const bool branch_taken_0x10640c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10640Cu;
        // 0x106410: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10640c) {
            ctx->pc = 0x106658u;
            goto label_106658;
        }
    }
    ctx->pc = 0x106414u;
label_106414:
    // 0x106414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106418: 0x24a5d980  addiu       $a1, $a1, -0x2680
    ctx->pc = 0x106418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957440));
    // 0x10641c: 0xc0417f2  jal         func_105FC8
    ctx->pc = 0x10641Cu;
    SET_GPR_U32(ctx, 31, 0x106424u);
    ctx->pc = 0x106420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10641Cu;
    // 0x106420: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105FC8u, 0x10641Cu, 0x106424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106424u;
label_106424:
    // 0x106424: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x106424u;
    {
        const bool branch_taken_0x106424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106424u;
        // 0x106428: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106424) {
            ctx->pc = 0x10667Cu;
            goto label_10667c;
        }
    }
    ctx->pc = 0x10642Cu;
label_10642c:
    // 0x10642c: 0x8e2701d8  lw          $a3, 0x1D8($s1)
    ctx->pc = 0x10642cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x106430: 0x8e2501e8  lw          $a1, 0x1E8($s1)
    ctx->pc = 0x106430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x106434: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x106434u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x106438: 0x8e2401dc  lw          $a0, 0x1DC($s1)
    ctx->pc = 0x106438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x10643c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10643cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106440: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x106440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x106444: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x106444u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106448: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x106448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x10644c: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x10644cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x106450: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x106450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x106454: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x106454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x106458: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x106458u;
    {
        const bool branch_taken_0x106458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x10645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106458u;
        // 0x10645c: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106458) {
            ctx->pc = 0x106478u;
            goto label_106478;
        }
    }
    ctx->pc = 0x106460u;
    // 0x106460: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x106460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x106464: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106464u;
    {
        const bool branch_taken_0x106464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106464u;
        // 0x106468: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106464) {
            ctx->pc = 0x10647Cu;
            goto label_10647c;
        }
    }
    ctx->pc = 0x10646Cu;
    // 0x10646c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x10646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x106470: 0x2e21026  xor         $v0, $s7, $v0
    ctx->pc = 0x106470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 2));
    // 0x106474: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x106474u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_106478:
    // 0x106478: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10647c:
    // 0x10647c: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10647Cu;
    {
        const bool branch_taken_0x10647c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x10647c) {
            ctx->pc = 0x106480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10647Cu;
            // 0x106480: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106490u;
            goto label_106490;
        }
    }
    ctx->pc = 0x106484u;
    // 0x106484: 0x15800011  bnez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x106484u;
    {
        const bool branch_taken_0x106484 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x106488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106484u;
        // 0x106488: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106484) {
            ctx->pc = 0x1064CCu;
            goto label_1064cc;
        }
    }
    ctx->pc = 0x10648Cu;
    // 0x10648c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x10648cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_106490:
    // 0x106490: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x106490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x106494: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x106494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10649c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x10649cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1064a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1064a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1064a4: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1064a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1064a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1064a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1064ac: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1064acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1064b0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1064b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1064b4: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x1064b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1064b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1064b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064bc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1064bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1064c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1064c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064c4: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1064C4u;
    {
        const bool branch_taken_0x1064c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1064C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064C4u;
        // 0x1064c8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064c4) {
            ctx->pc = 0x10664Cu;
            goto label_10664c;
        }
    }
    ctx->pc = 0x1064CCu;
label_1064cc:
    // 0x1064cc: 0x16820033  bne         $s4, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1064CCu;
    {
        const bool branch_taken_0x1064cc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1064D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064CCu;
        // 0x1064d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064cc) {
            ctx->pc = 0x10659Cu;
            goto label_10659c;
        }
    }
    ctx->pc = 0x1064D4u;
    // 0x1064d4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1064d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1064d8: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x1064d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1064dc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1064dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1064e0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1064e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1064e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1064e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1064e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1064e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1064ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1064ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1064f0: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1064f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1064f4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1064f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1064f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1064f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1064fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1064fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106500: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106504: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x106504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106508: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10650c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10650cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x106510: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106510u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106514: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x106514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x106518: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x106518u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10651c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x10651cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106520: 0xc041abc  jal         func_106AF0
    ctx->pc = 0x106520u;
    SET_GPR_U32(ctx, 31, 0x106528u);
    ctx->pc = 0x106524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106520u;
    // 0x106524: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106AF0u, 0x106520u, 0x106528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106528u;
label_106528:
    // 0x106528: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x106528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x10652c: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x10652Cu;
    {
        const bool branch_taken_0x10652c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x106530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10652Cu;
        // 0x106530: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10652c) {
            ctx->pc = 0x106550u;
            goto label_106550;
        }
    }
    ctx->pc = 0x106534u;
    // 0x106534: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x106534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x106538: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106538u;
    {
        const bool branch_taken_0x106538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106538u;
        // 0x10653c: 0x8fc30008  lw          $v1, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106538) {
            ctx->pc = 0x106554u;
            goto label_106554;
        }
    }
    ctx->pc = 0x106540u;
    // 0x106540: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x106540u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106544: 0x2e31026  xor         $v0, $s7, $v1
    ctx->pc = 0x106544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 3));
    // 0x106548: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106548u;
    {
        const bool branch_taken_0x106548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106548u;
        // 0x10654c: 0x2980a  movz        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106548) {
            ctx->pc = 0x106554u;
            goto label_106554;
        }
    }
    ctx->pc = 0x106550u;
label_106550:
    // 0x106550: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x106550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_106554:
    // 0x106554: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x106554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x106558: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x106558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10655c: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x10655cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x106560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x106564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106568: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10656c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10656cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x106570: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x106570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x106574: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x106574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106578: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x106578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10657c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x10657cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x106580: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x106580u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x106584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106588: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x106588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x10658c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10658cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x106590: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106590u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106594: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x106594u;
    {
        const bool branch_taken_0x106594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106594u;
        // 0x106598: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106594) {
            ctx->pc = 0x106658u;
            goto label_106658;
        }
    }
    ctx->pc = 0x10659Cu;
label_10659c:
    // 0x10659c: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x10659Cu;
    {
        const bool branch_taken_0x10659c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1065A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10659Cu;
        // 0x1065a0: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10659c) {
            ctx->pc = 0x106668u;
            goto label_106668;
        }
    }
    ctx->pc = 0x1065A4u;
    // 0x1065a4: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x1065a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1065a8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1065a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1065ac: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1065acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1065b0: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1065b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065b4: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x1065b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1065b8: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x1065b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x1065bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1065bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065c0: 0xc041804  jal         func_106010
    ctx->pc = 0x1065C0u;
    SET_GPR_U32(ctx, 31, 0x1065C8u);
    ctx->pc = 0x1065C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1065C0u;
    // 0x1065c4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106010u, 0x1065C0u, 0x1065C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1065C8u;
label_1065c8:
    // 0x1065c8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1065c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1065cc: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x1065ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1065d0: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x1065d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1065d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1065d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1065d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1065d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1065dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1065dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1065e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1065e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1065e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065e8: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1065e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x1065ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1065ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065f0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1065f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1065f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1065f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065f8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1065f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1065fc: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1065fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x106600: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x106600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x106604: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106604u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106608: 0xc041abc  jal         func_106AF0
    ctx->pc = 0x106608u;
    SET_GPR_U32(ctx, 31, 0x106610u);
    ctx->pc = 0x10660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106608u;
    // 0x10660c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106AF0u, 0x106608u, 0x106610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106610u;
label_106610:
    // 0x106610: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x106610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x106614: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x106614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106618: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x106618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x10661c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x10661cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x106620: 0x77100b  movn        $v0, $v1, $s7
    ctx->pc = 0x106620u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x106624: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x106624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x106628: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x106628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10662c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x10662cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x106630: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x106630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106634: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x106634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10663c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x10663cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x106640: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106644: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x106644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x106648: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10664c:
    // 0x10664c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10664cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106650: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x106650u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x106654: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106654u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_106658:
    // 0x106658: 0xc041abc  jal         func_106AF0
    ctx->pc = 0x106658u;
    SET_GPR_U32(ctx, 31, 0x106660u);
    ctx->pc = 0x10665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106658u;
    // 0x10665c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106AF0u, 0x106658u, 0x106660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106660u;
label_106660:
    // 0x106660: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x106660u;
    {
        const bool branch_taken_0x106660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106660u;
        // 0x106664: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106660) {
            ctx->pc = 0x10667Cu;
            goto label_10667c;
        }
    }
    ctx->pc = 0x106668u;
label_106668:
    // 0x106668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10666c: 0x24a5d9a0  addiu       $a1, $a1, -0x2660
    ctx->pc = 0x10666cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957472));
    // 0x106670: 0xc0417f2  jal         func_105FC8
    ctx->pc = 0x106670u;
    SET_GPR_U32(ctx, 31, 0x106678u);
    ctx->pc = 0x106674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106670u;
    // 0x106674: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105FC8u, 0x106670u, 0x106678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106678u;
label_106678:
    // 0x106678: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x106678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10667c:
    // 0x10667c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x10667cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_106680:
    // 0x106680: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x106680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x106684: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x106684u;
    {
        const bool branch_taken_0x106684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106684u;
        // 0x106688: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106684) {
            ctx->pc = 0x10686Cu;
            goto label_10686c;
        }
    }
    ctx->pc = 0x10668Cu;
    // 0x10668c: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x10668cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x106690: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x106690u;
    {
        const bool branch_taken_0x106690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x106694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106690u;
        // 0x106694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106690) {
            ctx->pc = 0x106764u;
            goto label_106764;
        }
    }
    ctx->pc = 0x106698u;
    // 0x106698: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x106698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10669c: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10669Cu;
    {
        const bool branch_taken_0x10669c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1066A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10669Cu;
        // 0x1066a0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10669c) {
            ctx->pc = 0x1066DCu;
            goto label_1066dc;
        }
    }
    ctx->pc = 0x1066A4u;
    // 0x1066a4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1066a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1066a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1066a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066ac: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1066acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1066b0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1066b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066b4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1066b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1066b8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1066b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066bc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1066bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1066c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1066c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066c4: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1066c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1066c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1066c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066cc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1066ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1066d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1066d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066d4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1066D4u;
    {
        const bool branch_taken_0x1066d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1066D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066D4u;
        // 0x1066d8: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1066d4) {
            ctx->pc = 0x106754u;
            goto label_106754;
        }
    }
    ctx->pc = 0x1066DCu;
label_1066dc:
    // 0x1066dc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1066dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1066e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1066e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066e4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1066e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1066e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1066e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066ec: 0x8e2501cc  lw          $a1, 0x1CC($s1)
    ctx->pc = 0x1066ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
    // 0x1066f0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1066f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1066f4: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x1066f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1066f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1066f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1066fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x106700: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x106700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x106704: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x106704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x106708: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106708u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10670c: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x10670cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x106710: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x106710u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106714: 0xc041abc  jal         func_106AF0
    ctx->pc = 0x106714u;
    SET_GPR_U32(ctx, 31, 0x10671Cu);
    ctx->pc = 0x106718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106714u;
    // 0x106718: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106AF0u, 0x106714u, 0x10671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10671Cu;
label_10671c:
    // 0x10671c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x10671cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x106720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106724: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x106724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x106728: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106728u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10672c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10672cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x106730: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x106730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x106734: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x106734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x106738: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x106738u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10673c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10673cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x106740: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x106740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106744: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x106744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x106748: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106748u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10674c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x10674cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x106750: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x106750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_106754:
    // 0x106754: 0xc041abc  jal         func_106AF0
    ctx->pc = 0x106754u;
    SET_GPR_U32(ctx, 31, 0x10675Cu);
    ctx->pc = 0x106758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106754u;
    // 0x106758: 0x8c8501cc  lw          $a1, 0x1CC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106AF0u, 0x106754u, 0x10675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10675Cu;
label_10675c:
    // 0x10675c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x10675Cu;
    {
        const bool branch_taken_0x10675c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10675Cu;
        // 0x106760: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10675c) {
            ctx->pc = 0x106870u;
            goto label_106870;
        }
    }
    ctx->pc = 0x106764u;
label_106764:
    // 0x106764: 0x16820015  bne         $s4, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x106764u;
    {
        const bool branch_taken_0x106764 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x106768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106764u;
        // 0x106768: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106764) {
            ctx->pc = 0x1067BCu;
            goto label_1067bc;
        }
    }
    ctx->pc = 0x10676Cu;
    // 0x10676c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x10676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x106770: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x106770u;
    {
        const bool branch_taken_0x106770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106770) {
            ctx->pc = 0x106774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106770u;
            // 0x106774: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10677Cu;
            goto label_10677c;
        }
    }
    ctx->pc = 0x106778u;
    // 0x106778: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x106778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_10677c:
    // 0x10677c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x10677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x106780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106784: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x106784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x106788: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106788u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10678c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10678cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x106790: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x106790u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106794: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x106794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x106798: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10679c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x10679cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1067a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1067a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067a4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1067a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1067a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1067a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067ac: 0xc041abc  jal         func_106AF0
    ctx->pc = 0x1067ACu;
    SET_GPR_U32(ctx, 31, 0x1067B4u);
    ctx->pc = 0x1067B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1067ACu;
    // 0x1067b0: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106AF0u, 0x1067ACu, 0x1067B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1067B4u;
label_1067b4:
    // 0x1067b4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1067B4u;
    {
        const bool branch_taken_0x1067b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1067B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067B4u;
        // 0x1067b8: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067b4) {
            ctx->pc = 0x106870u;
            goto label_106870;
        }
    }
    ctx->pc = 0x1067BCu;
label_1067bc:
    // 0x1067bc: 0x16820027  bne         $s4, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1067BCu;
    {
        const bool branch_taken_0x1067bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1067C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067BCu;
        // 0x1067c0: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067bc) {
            ctx->pc = 0x10685Cu;
            goto label_10685c;
        }
    }
    ctx->pc = 0x1067C4u;
    // 0x1067c4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x1067c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1067c8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1067C8u;
    {
        const bool branch_taken_0x1067c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1067c8) {
            ctx->pc = 0x1067CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1067C8u;
            // 0x1067cc: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1067D4u;
            goto label_1067d4;
        }
    }
    ctx->pc = 0x1067D0u;
    // 0x1067d0: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x1067d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_1067d4:
    // 0x1067d4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1067d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1067d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1067d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067dc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1067dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1067e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1067e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067e4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1067e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1067e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1067e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067ec: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1067ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1067f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1067f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067f4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1067f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1067f8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1067f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1067fc: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1067fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x106800: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106800u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106804: 0xc041abc  jal         func_106AF0
    ctx->pc = 0x106804u;
    SET_GPR_U32(ctx, 31, 0x10680Cu);
    ctx->pc = 0x106808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106804u;
    // 0x106808: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106AF0u, 0x106804u, 0x10680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10680Cu;
label_10680c:
    // 0x10680c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x10680cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x106810: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x106810u;
    {
        const bool branch_taken_0x106810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106810) {
            ctx->pc = 0x106814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106810u;
            // 0x106814: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10681Cu;
            goto label_10681c;
        }
    }
    ctx->pc = 0x106818u;
    // 0x106818: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x106818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_10681c:
    // 0x10681c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x10681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x106820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106824: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x106824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x106828: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106828u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10682c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10682cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x106830: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x106830u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106834: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x106834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x106838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10683c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x10683cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x106840: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106844: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x106844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x106848: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x106848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10684c: 0xc041abc  jal         func_106AF0
    ctx->pc = 0x10684Cu;
    SET_GPR_U32(ctx, 31, 0x106854u);
    ctx->pc = 0x106850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10684Cu;
    // 0x106850: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106AF0u, 0x10684Cu, 0x106854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106854u;
label_106854:
    // 0x106854: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x106854u;
    {
        const bool branch_taken_0x106854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106854u;
        // 0x106858: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106854) {
            ctx->pc = 0x106870u;
            goto label_106870;
        }
    }
    ctx->pc = 0x10685Cu;
label_10685c:
    // 0x10685c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10685cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106860: 0x24a5d9c0  addiu       $a1, $a1, -0x2640
    ctx->pc = 0x106860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957504));
    // 0x106864: 0xc0417f2  jal         func_105FC8
    ctx->pc = 0x106864u;
    SET_GPR_U32(ctx, 31, 0x10686Cu);
    ctx->pc = 0x106868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106864u;
    // 0x106868: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105FC8u, 0x106864u, 0x10686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10686Cu;
label_10686c:
    // 0x10686c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x10686cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_106870:
    // 0x106870: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x106870u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x106874: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x106874u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x106878: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x106878u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10687c: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x10687cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x106880: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x106880u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106884: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x106884u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106888: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x106888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10688c: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x10688cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106890: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x106890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106894: 0x3e00008  jr          $ra
    ctx->pc = 0x106894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106894u;
        // 0x106898: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10689Cu;
    // 0x10689c: 0x0  nop
    ctx->pc = 0x10689cu;
    // NOP
    ctx->pc = 0x1068a0u;
}
