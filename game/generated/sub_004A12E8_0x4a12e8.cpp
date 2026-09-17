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

// Function: sub_004A12E8
// Address: 0x4a12e8 - 0x4a13c0
void sub_004A12E8_0x4a12e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A12E8_0x4a12e8");
#endif

    switch (ctx->pc) {
        case 0x4a1388u: goto label_4a1388;
        default: break;
    }

    ctx->pc = 0x4a12e8u;

    // 0x4a12e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a12e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a12ec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a12ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a12f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a12f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a12f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4a12f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a12f8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4a12f8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4a12fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a12fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a1300: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4a1300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4a1304: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4a1304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4a1308: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4a1308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4a130c: 0x2471d680  addiu       $s1, $v1, -0x2980
    ctx->pc = 0x4a130cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4a1310: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x4a1310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4a1314: 0x8e232288  lw          $v1, 0x2288($s1)
    ctx->pc = 0x4a1314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8840)));
    // 0x4a1318: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a1318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a131c: 0x26322290  addiu       $s2, $s1, 0x2290
    ctx->pc = 0x4a131cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8848));
    // 0x4a1320: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a1320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4a1324: 0xa6440000  sh          $a0, 0x0($s2)
    ctx->pc = 0x4a1324u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a1328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a1328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a132c: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x4a132cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x4a1330: 0x26260098  addiu       $a2, $s1, 0x98
    ctx->pc = 0x4a1330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    // 0x4a1334: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a1334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a1338: 0xae232294  sw          $v1, 0x2294($s1)
    ctx->pc = 0x4a1338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8852), GPR_U32(ctx, 3));
    // 0x4a133c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4a133cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4a1340: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4a1340u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4a1344: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4a1344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a1348: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x4a1348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x4a134c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4a134cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a1350: 0x8e2422a4  lw          $a0, 0x22A4($s1)
    ctx->pc = 0x4a1350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8868)));
    // 0x4a1354: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a1354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4a1358: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a1358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a135c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a135cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a1360: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x4a1360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x4a1364: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a1364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a1368: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x4a1368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a136c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x4a136cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a1370: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a1370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a1374: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4a1374u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a1378: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A1378u;
    {
        const bool branch_taken_0x4a1378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a1378) {
            ctx->pc = 0x4A137Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A1378u;
            // 0x4a137c: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A138Cu;
            goto label_4a138c;
        }
    }
    ctx->pc = 0x4A1380u;
    // 0x4a1380: 0xc128452  jal         func_4A1148
    ctx->pc = 0x4A1380u;
    SET_GPR_U32(ctx, 31, 0x4A1388u);
    ctx->pc = 0x4A1384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1380u;
    // 0x4a1384: 0xa4c40000  sh          $a0, 0x0($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1148u, 0x4A1380u, 0x4A1388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1388u;
label_4a1388:
    // 0x4a1388: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4a1388u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4a138c:
    // 0x4a138c: 0x8e23228c  lw          $v1, 0x228C($s1)
    ctx->pc = 0x4a138cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8844)));
    // 0x4a1390: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a1390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a1394: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a1394u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a1398: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a1398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a139c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a139cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a13a0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x4a13a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a13a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4a13a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a13a8: 0xa600007e  sh          $zero, 0x7E($s0)
    ctx->pc = 0x4a13a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a13ac: 0xa604007c  sh          $a0, 0x7C($s0)
    ctx->pc = 0x4a13acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a13b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a13b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a13b4: 0x8127fd4  j           func_49FF50
    ctx->pc = 0x4A13B4u;
    ctx->pc = 0x4A13B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A13B4u;
    // 0x4a13b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FF50u, 0x4A13B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A13BCu;
    // 0x4a13bc: 0x0  nop
    ctx->pc = 0x4a13bcu;
    // NOP
    ctx->pc = 0x4a13c0u;
}
