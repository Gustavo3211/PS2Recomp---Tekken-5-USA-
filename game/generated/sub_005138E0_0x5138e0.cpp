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

// Function: sub_005138E0
// Address: 0x5138e0 - 0x5139d0
void sub_005138E0_0x5138e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005138E0_0x5138e0");
#endif

    switch (ctx->pc) {
        case 0x513940u: goto label_513940;
        case 0x51394cu: goto label_51394c;
        default: break;
    }

    ctx->pc = 0x5138e0u;

    // 0x5138e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x5138e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x5138e4: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x5138e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x5138e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x5138e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x5138ec: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x5138ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x5138f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x5138f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x5138f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5138f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5138f8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x5138f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x5138fc: 0x24130030  addiu       $s3, $zero, 0x30
    ctx->pc = 0x5138fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x513900: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x513900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x513904: 0x2414003f  addiu       $s4, $zero, 0x3F
    ctx->pc = 0x513904u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x513908: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x513908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x51390c: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x51390cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x513910: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x513910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x513914: 0x24160090  addiu       $s6, $zero, 0x90
    ctx->pc = 0x513914u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x513918: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x513918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x51391c: 0x241700ff  addiu       $s7, $zero, 0xFF
    ctx->pc = 0x51391cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x513920: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x513920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x513924: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x513924u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x513928: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x513928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x51392c: 0x2462f080  addiu       $v0, $v1, -0xF80
    ctx->pc = 0x51392cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x513930: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x513930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x513934: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x513934u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8FF0D0u));
    // 0x513938: 0x8c500054  lw          $s0, 0x54($v0)
    ctx->pc = 0x513938u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x8FF0D4u));
    // 0x51393c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x51393cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_513940:
    // 0x513940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x513940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x513944: 0xc14481c  jal         func_512070
    ctx->pc = 0x513944u;
    SET_GPR_U32(ctx, 31, 0x51394Cu);
    ctx->pc = 0x513948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513944u;
    // 0x513948: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x513944u, 0x51394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x51394Cu;
label_51394c:
    // 0x51394c: 0x2623003f  addiu       $v1, $s1, 0x3F
    ctx->pc = 0x51394cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 63));
    // 0x513950: 0x145e000a  bne         $v0, $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x513950u;
    {
        const bool branch_taken_0x513950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x513954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513950u;
        // 0x513954: 0x31c00  sll         $v1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513950) {
            ctx->pc = 0x51397Cu;
            goto label_51397c;
        }
    }
    ctx->pc = 0x513958u;
    // 0x513958: 0xa6110006  sh          $s1, 0x6($s0)
    ctx->pc = 0x513958u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x51395c: 0xa6170000  sh          $s7, 0x0($s0)
    ctx->pc = 0x51395cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 23));
    // 0x513960: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x513960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x513964: 0xa6160004  sh          $s6, 0x4($s0)
    ctx->pc = 0x513964u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 22));
    // 0x513968: 0xa6150008  sh          $s5, 0x8($s0)
    ctx->pc = 0x513968u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 21));
    // 0x51396c: 0xa614000a  sh          $s4, 0xA($s0)
    ctx->pc = 0x51396cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 20));
    // 0x513970: 0xa613000c  sh          $s3, 0xC($s0)
    ctx->pc = 0x513970u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 19));
    // 0x513974: 0xa600000e  sh          $zero, 0xE($s0)
    ctx->pc = 0x513974u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x513978: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x513978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_51397c:
    // 0x51397c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x51397cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x513980: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x513980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x513984: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x513984u;
    {
        const bool branch_taken_0x513984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x513988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513984u;
        // 0x513988: 0x38c03  sra         $s1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513984) {
            ctx->pc = 0x513940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_513940;
        }
    }
    ctx->pc = 0x51398Cu;
    // 0x51398c: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x51398cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x513990: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x513990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x513994: 0x2482f080  addiu       $v0, $a0, -0xF80
    ctx->pc = 0x513994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963328));
    // 0x513998: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x513998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x51399c: 0xac500054  sw          $s0, 0x54($v0)
    ctx->pc = 0x51399cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x8FF0D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8FF0D4u, _value); } while (0);
    // 0x5139a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x5139a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5139a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x5139a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5139a8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x5139a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5139ac: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x5139acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5139b0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x5139b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5139b4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x5139b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5139b8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x5139b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x5139bc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x5139bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x5139c0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x5139c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x5139c4: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x5139c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8FF0D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8FF0D0u, _value); } while (0);
    // 0x5139c8: 0x3e00008  jr          $ra
    ctx->pc = 0x5139C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5139CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5139C8u;
        // 0x5139cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5139C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5139D0u;
}
