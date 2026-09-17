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

// Function: sub_003133F8
// Address: 0x3133f8 - 0x313640
void sub_003133F8_0x3133f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003133F8_0x3133f8");
#endif

    switch (ctx->pc) {
        case 0x313444u: goto label_313444;
        case 0x31345cu: goto label_31345c;
        case 0x313468u: goto label_313468;
        case 0x313488u: goto label_313488;
        case 0x3134acu: goto label_3134ac;
        case 0x3134f8u: goto label_3134f8;
        case 0x313600u: goto label_313600;
        case 0x313618u: goto label_313618;
        default: break;
    }

    ctx->pc = 0x3133f8u;

    // 0x3133f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3133f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3133fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3133fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313400: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x313400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x313404: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x313404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313408: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x313408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x31340c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31340cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313410: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x313410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x313414: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x313414u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313418: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x313418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31341c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x31341cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x313420: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x313420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x313424: 0x1240007d  beqz        $s2, . + 4 + (0x7D << 2)
    ctx->pc = 0x313424u;
    {
        const bool branch_taken_0x313424 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x313428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313424u;
        // 0x313428: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313424) {
            ctx->pc = 0x31361Cu;
            goto label_31361c;
        }
    }
    ctx->pc = 0x31342Cu;
    // 0x31342c: 0x3c13001c  lui         $s3, 0x1C
    ctx->pc = 0x31342cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)28 << 16));
    // 0x313430: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x313430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x313434: 0x26708110  addiu       $s0, $s3, -0x7EF0
    ctx->pc = 0x313434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294934800));
    // 0x313438: 0x24a581e0  addiu       $a1, $a1, -0x7E20
    ctx->pc = 0x313438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935008));
    // 0x31343c: 0xc0c5668  jal         func_3159A0
    ctx->pc = 0x31343Cu;
    SET_GPR_U32(ctx, 31, 0x313444u);
    ctx->pc = 0x313440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31343Cu;
    // 0x313440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3159A0u, 0x31343Cu, 0x313444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313444u;
label_313444:
    // 0x313444: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x313444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x313448: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x313448u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x31344c: 0x24a58220  addiu       $a1, $a1, -0x7DE0
    ctx->pc = 0x31344cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935072));
    // 0x313450: 0x24c68260  addiu       $a2, $a2, -0x7DA0
    ctx->pc = 0x313450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935136));
    // 0x313454: 0xc0c5664  jal         func_315990
    ctx->pc = 0x313454u;
    SET_GPR_U32(ctx, 31, 0x31345Cu);
    ctx->pc = 0x313458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313454u;
    // 0x313458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315990u, 0x313454u, 0x31345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31345Cu;
label_31345c:
    // 0x31345c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31345cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313460: 0xc0c4f76  jal         func_313DD8
    ctx->pc = 0x313460u;
    SET_GPR_U32(ctx, 31, 0x313468u);
    ctx->pc = 0x313464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313460u;
    // 0x313464: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313DD8u, 0x313460u, 0x313468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313468u;
label_313468:
    // 0x313468: 0x8f82c57c  lw          $v0, -0x3A84($gp)
    ctx->pc = 0x313468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952316)));
    // 0x31346c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x31346Cu;
    {
        const bool branch_taken_0x31346c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31346c) {
            ctx->pc = 0x313470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31346Cu;
            // 0x313470: 0x8e06002c  lw          $a2, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31348Cu;
            goto label_31348c;
        }
    }
    ctx->pc = 0x313474u;
    // 0x313474: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x313474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x313478: 0x50910010  beql        $a0, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313478u;
    {
        const bool branch_taken_0x313478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x313478) {
            ctx->pc = 0x31347Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313478u;
            // 0x31347c: 0x26658110  addiu       $a1, $s3, -0x7EF0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294934800));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3134BCu;
            goto label_3134bc;
        }
    }
    ctx->pc = 0x313480u;
    // 0x313480: 0xc0cb30a  jal         func_32CC28
    ctx->pc = 0x313480u;
    SET_GPR_U32(ctx, 31, 0x313488u);
    ctx->pc = 0x32CC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC28u, 0x313480u, 0x313488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313488u;
label_313488:
    // 0x313488: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x313488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_31348c:
    // 0x31348c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31348cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313490: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x313490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x313494: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x313494u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x313498: 0xae1100b4  sw          $s1, 0xB4($s0)
    ctx->pc = 0x313498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 17));
    // 0x31349c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x31349cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x3134a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3134a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3134a4: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x3134A4u;
    SET_GPR_U32(ctx, 31, 0x3134ACu);
    ctx->pc = 0x3134A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3134A4u;
    // 0x3134a8: 0x52980  sll         $a1, $a1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x3134A4u, 0x3134ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3134ACu;
label_3134ac:
    // 0x3134ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3134acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3134b0: 0xaf83c57c  sw          $v1, -0x3A84($gp)
    ctx->pc = 0x3134b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952316), GPR_U32(ctx, 3));
    // 0x3134b4: 0x2c540001  sltiu       $s4, $v0, 0x1
    ctx->pc = 0x3134b4u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3134b8: 0x26658110  addiu       $a1, $s3, -0x7EF0
    ctx->pc = 0x3134b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294934800));
label_3134bc:
    // 0x3134bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3134bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3134c0: 0x8ca4003c  lw          $a0, 0x3C($a1)
    ctx->pc = 0x3134c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x3134c4: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x3134c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x3134c8: 0xa0a30058  sb          $v1, 0x58($a1)
    ctx->pc = 0x3134c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 88), (uint8_t)GPR_U32(ctx, 3));
    // 0x3134cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3134ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3134d0: 0xaca20064  sw          $v0, 0x64($a1)
    ctx->pc = 0x3134d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 2));
    // 0x3134d4: 0xaca20060  sw          $v0, 0x60($a1)
    ctx->pc = 0x3134d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 2));
    // 0x3134d8: 0xa4a00068  sh          $zero, 0x68($a1)
    ctx->pc = 0x3134d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x3134dc: 0xa4a0006a  sh          $zero, 0x6A($a1)
    ctx->pc = 0x3134dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x3134e0: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x3134E0u;
    {
        const bool branch_taken_0x3134e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3134E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3134E0u;
        // 0x3134e4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3134e0) {
            ctx->pc = 0x3135E0u;
            goto label_3135e0;
        }
    }
    ctx->pc = 0x3134E8u;
    // 0x3134e8: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x3134e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3134ec: 0x2788c578  addiu       $t0, $gp, -0x3A88
    ctx->pc = 0x3134ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952312));
    // 0x3134f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3134f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3134f4: 0x0  nop
    ctx->pc = 0x3134f4u;
    // NOP
label_3134f8:
    // 0x3134f8: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x3134f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x3134fc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3134fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x313500: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313504: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x313504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x313508: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x313508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31350c: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x31350cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x313510: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x313510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313514: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x313514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x313518: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x313518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x31351c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x31351cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313520: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x313520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x313524: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x313524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x313528: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x313528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31352c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x31352cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x313530: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313534: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x313534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x313538: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x313538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31353c: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x31353cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x313540: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x313540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x313544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313548: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x313548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x31354c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x313550: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x313550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x313554: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x313554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313558: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x313558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x31355c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31355cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x313560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313564: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x313564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x313568: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x313568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31356c: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x31356cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x313570: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x313570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313574: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x313574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x313578: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x313578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31357c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313580: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x313580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x313584: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x313584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x313588: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x313588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x31358c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x31358cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313590: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x313590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x313594: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x313594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x313598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31359c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x31359cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3135a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3135a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3135a4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x3135a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x3135a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3135a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3135ac: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x3135acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x3135b0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3135b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3135b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3135b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3135b8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3135b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3135bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3135bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3135c0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x3135c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x3135c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3135c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3135c8: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x3135c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x3135cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3135ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3135d0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3135d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3135d4: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x3135d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3135d8: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x3135D8u;
    {
        const bool branch_taken_0x3135d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3135DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3135D8u;
        // 0x3135dc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3135d8) {
            ctx->pc = 0x3134F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3134f8;
        }
    }
    ctx->pc = 0x3135E0u;
label_3135e0:
    // 0x3135e0: 0x26708110  addiu       $s0, $s3, -0x7EF0
    ctx->pc = 0x3135e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294934800));
    // 0x3135e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3135e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3135e8: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x3135e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3135ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3135ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3135f0: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x3135f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3135f4: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x3135f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x3135f8: 0xc0c4e64  jal         func_313990
    ctx->pc = 0x3135F8u;
    SET_GPR_U32(ctx, 31, 0x313600u);
    ctx->pc = 0x3135FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3135F8u;
    // 0x3135fc: 0x24e7fffe  addiu       $a3, $a3, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313990u, 0x3135F8u, 0x313600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313600u;
label_313600:
    // 0x313600: 0xafbd0000  sw          $sp, 0x0($sp)
    ctx->pc = 0x313600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 29));
    // 0x313604: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x313604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313608: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x313608u;
    {
        const bool branch_taken_0x313608 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x31360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313608u;
        // 0x31360c: 0xa602004c  sh          $v0, 0x4C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313608) {
            ctx->pc = 0x313618u;
            goto label_313618;
        }
    }
    ctx->pc = 0x313610u;
    // 0x313610: 0xc0c566a  jal         func_3159A8
    ctx->pc = 0x313610u;
    SET_GPR_U32(ctx, 31, 0x313618u);
    ctx->pc = 0x313614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313610u;
    // 0x313614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3159A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3159A8u, 0x313610u, 0x313618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313618u;
label_313618:
    // 0x313618: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x313618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31361c:
    // 0x31361c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31361cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313620: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x313620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x313624: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x313624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313628: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x313628u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31362c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x31362cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x313630: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x313630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x313634: 0x3e00008  jr          $ra
    ctx->pc = 0x313634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313634u;
        // 0x313638: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31363Cu;
    // 0x31363c: 0x0  nop
    ctx->pc = 0x31363cu;
    // NOP
    ctx->pc = 0x313640u;
}
