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

// Function: sub_00491418
// Address: 0x491418 - 0x4915b8
void sub_00491418_0x491418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491418_0x491418");
#endif

    switch (ctx->pc) {
        case 0x491438u: goto label_491438;
        case 0x491460u: goto label_491460;
        case 0x491474u: goto label_491474;
        case 0x491488u: goto label_491488;
        case 0x4914c0u: goto label_4914c0;
        case 0x4914d0u: goto label_4914d0;
        case 0x491520u: goto label_491520;
        case 0x491530u: goto label_491530;
        case 0x491544u: goto label_491544;
        case 0x491558u: goto label_491558;
        case 0x491564u: goto label_491564;
        case 0x491570u: goto label_491570;
        case 0x49157cu: goto label_49157c;
        case 0x491588u: goto label_491588;
        case 0x4915a8u: goto label_4915a8;
        default: break;
    }

    ctx->pc = 0x491418u;

    // 0x491418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x491418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49141c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49141cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x491420: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x491420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x491424: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x491424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x491428: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x491428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x49142c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49142cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x491430: 0xc124620  jal         func_491880
    ctx->pc = 0x491430u;
    SET_GPR_U32(ctx, 31, 0x491438u);
    ctx->pc = 0x491434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491430u;
    // 0x491434: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x491430u, 0x491438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491438u;
label_491438:
    // 0x491438: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x491438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x49143c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49143cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x491440: 0x8463e812  lh          $v1, -0x17EE($v1)
    ctx->pc = 0x491440u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961170)));
    // 0x491444: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x491444u;
    {
        const bool branch_taken_0x491444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x491448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491444u;
        // 0x491448: 0x3c130073  lui         $s3, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491444) {
            ctx->pc = 0x4914A4u;
            goto label_4914a4;
        }
    }
    ctx->pc = 0x49144Cu;
    // 0x49144c: 0x3c12007e  lui         $s2, 0x7E
    ctx->pc = 0x49144cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)126 << 16));
    // 0x491450: 0x2670d680  addiu       $s0, $s3, -0x2980
    ctx->pc = 0x491450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x491454: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x491454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x491458: 0xc12d9c4  jal         func_4B6710
    ctx->pc = 0x491458u;
    SET_GPR_U32(ctx, 31, 0x491460u);
    ctx->pc = 0x49145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491458u;
    // 0x49145c: 0xae4214e0  sw          $v0, 0x14E0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5344), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B6710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B6710u, 0x491458u, 0x491460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491460u;
label_491460:
    // 0x491460: 0x860200ac  lh          $v0, 0xAC($s0)
    ctx->pc = 0x491460u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x491464: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x491464u;
    {
        const bool branch_taken_0x491464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x491468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491464u;
        // 0x491468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491464) {
            ctx->pc = 0x491480u;
            goto label_491480;
        }
    }
    ctx->pc = 0x49146Cu;
    // 0x49146c: 0xc12432a  jal         func_490CA8
    ctx->pc = 0x49146Cu;
    SET_GPR_U32(ctx, 31, 0x491474u);
    ctx->pc = 0x490CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490CA8u, 0x49146Cu, 0x491474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491474u;
label_491474:
    // 0x491474: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x491474u;
    {
        const bool branch_taken_0x491474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491474u;
        // 0x491478: 0x264614e0  addiu       $a2, $s2, 0x14E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 5344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491474) {
            ctx->pc = 0x49148Cu;
            goto label_49148c;
        }
    }
    ctx->pc = 0x49147Cu;
    // 0x49147c: 0x0  nop
    ctx->pc = 0x49147cu;
    // NOP
label_491480:
    // 0x491480: 0xc1243d8  jal         func_490F60
    ctx->pc = 0x491480u;
    SET_GPR_U32(ctx, 31, 0x491488u);
    ctx->pc = 0x490F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490F60u, 0x491480u, 0x491488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491488u;
label_491488:
    // 0x491488: 0x264614e0  addiu       $a2, $s2, 0x14E0
    ctx->pc = 0x491488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 5344));
label_49148c:
    // 0x49148c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x49148cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x491490: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x491490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x491494: 0x2665d680  addiu       $a1, $s3, -0x2980
    ctx->pc = 0x491494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x491498: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x491498u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x49149c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x49149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4914a0: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x4914a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
label_4914a4:
    // 0x4914a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4914a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4914a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4914a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4914ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4914acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4914b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4914b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4914b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4914b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4914b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4914B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4914BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4914B8u;
        // 0x4914bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4914B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4914C0u;
label_4914c0:
    // 0x4914c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4914c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4914c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4914c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4914c8: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4914C8u;
    SET_GPR_U32(ctx, 31, 0x4914D0u);
    ctx->pc = 0x4914CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4914C8u;
    // 0x4914cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4914C8u, 0x4914D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4914D0u;
label_4914d0:
    // 0x4914d0: 0x240300e6  addiu       $v1, $zero, 0xE6
    ctx->pc = 0x4914d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x4914d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4914d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4914d8: 0x2404056f  addiu       $a0, $zero, 0x56F
    ctx->pc = 0x4914d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1391));
    // 0x4914dc: 0x24050570  addiu       $a1, $zero, 0x570
    ctx->pc = 0x4914dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x4914e0: 0x24060571  addiu       $a2, $zero, 0x571
    ctx->pc = 0x4914e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1393));
    // 0x4914e4: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4914e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4914e8: 0x24070572  addiu       $a3, $zero, 0x572
    ctx->pc = 0x4914e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1394));
    // 0x4914ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4914ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4914f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4914f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4914f4: 0xa444011e  sh          $a0, 0x11E($v0)
    ctx->pc = 0x4914f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 286), (uint16_t)GPR_U32(ctx, 4));
    // 0x4914f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4914f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4914fc: 0xa4650118  sh          $a1, 0x118($v1)
    ctx->pc = 0x4914fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 5));
    // 0x491500: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x491500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x491504: 0xa4460120  sh          $a2, 0x120($v0)
    ctx->pc = 0x491504u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 288), (uint16_t)GPR_U32(ctx, 6));
    // 0x491508: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x491508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49150c: 0xa4670122  sh          $a3, 0x122($v1)
    ctx->pc = 0x49150cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 290), (uint16_t)GPR_U32(ctx, 7));
    // 0x491510: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x491510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x491514: 0xa440011a  sh          $zero, 0x11A($v0)
    ctx->pc = 0x491514u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 282), (uint16_t)GPR_U32(ctx, 0));
    // 0x491518: 0x3e00008  jr          $ra
    ctx->pc = 0x491518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491518u;
        // 0x49151c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491520u;
label_491520:
    // 0x491520: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x491520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x491524: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x491524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x491528: 0x3e00008  jr          $ra
    ctx->pc = 0x491528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491528u;
        // 0x49152c: 0xa462d68a  sh          $v0, -0x2976($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294956682), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491530u;
label_491530:
    // 0x491530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x491530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x491534: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x491534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x491538: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x491538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49153c: 0xc123412  jal         func_48D048
    ctx->pc = 0x49153Cu;
    SET_GPR_U32(ctx, 31, 0x491544u);
    ctx->pc = 0x491540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49153Cu;
    // 0x491540: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D048u, 0x49153Cu, 0x491544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491544u;
label_491544:
    // 0x491544: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x491544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x491548: 0x54430010  bnel        $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x491548u;
    {
        const bool branch_taken_0x491548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x491548) {
            ctx->pc = 0x49154Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x491548u;
            // 0x49154c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49158Cu;
            goto label_49158c;
        }
    }
    ctx->pc = 0x491550u;
    // 0x491550: 0xc1263f0  jal         func_498FC0
    ctx->pc = 0x491550u;
    SET_GPR_U32(ctx, 31, 0x491558u);
    ctx->pc = 0x491554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491550u;
    // 0x491554: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498FC0u, 0x491550u, 0x491558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491558u;
label_491558:
    // 0x491558: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x491558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x49155c: 0xc124910  jal         func_492440
    ctx->pc = 0x49155Cu;
    SET_GPR_U32(ctx, 31, 0x491564u);
    ctx->pc = 0x491560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49155Cu;
    // 0x491560: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x49155Cu, 0x491564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491564u;
label_491564:
    // 0x491564: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x491564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x491568: 0xc124910  jal         func_492440
    ctx->pc = 0x491568u;
    SET_GPR_U32(ctx, 31, 0x491570u);
    ctx->pc = 0x49156Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491568u;
    // 0x49156c: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x491568u, 0x491570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491570u;
label_491570:
    // 0x491570: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x491570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x491574: 0xc124910  jal         func_492440
    ctx->pc = 0x491574u;
    SET_GPR_U32(ctx, 31, 0x49157Cu);
    ctx->pc = 0x491578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491574u;
    // 0x491578: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x491574u, 0x49157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49157Cu;
label_49157c:
    // 0x49157c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x49157cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x491580: 0xc124910  jal         func_492440
    ctx->pc = 0x491580u;
    SET_GPR_U32(ctx, 31, 0x491588u);
    ctx->pc = 0x491584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491580u;
    // 0x491584: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x491580u, 0x491588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491588u;
label_491588:
    // 0x491588: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x491588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_49158c:
    // 0x49158c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49158cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x491590: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x491590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x491594: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x491594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x491598: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x491598u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x49159c: 0xa4400016  sh          $zero, 0x16($v0)
    ctx->pc = 0x49159cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x4915a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4915A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4915A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4915A0u;
        // 0x4915a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4915A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4915A8u;
label_4915a8:
    // 0x4915a8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4915a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4915ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4915acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4915b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4915B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4915B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4915B0u;
        // 0x4915b4: 0xa462d688  sh          $v0, -0x2978($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294956680), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4915B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4915B8u;
}
