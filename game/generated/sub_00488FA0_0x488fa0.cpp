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

// Function: sub_00488FA0
// Address: 0x488fa0 - 0x489110
void sub_00488FA0_0x488fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488FA0_0x488fa0");
#endif

    switch (ctx->pc) {
        case 0x489028u: goto label_489028;
        case 0x48904cu: goto label_48904c;
        case 0x489088u: goto label_489088;
        case 0x4890c0u: goto label_4890c0;
        default: break;
    }

    ctx->pc = 0x488fa0u;

    // 0x488fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x488fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x488fa4: 0x3c02007c  lui         $v0, 0x7C
    ctx->pc = 0x488fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)124 << 16));
    // 0x488fa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x488fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x488fac: 0x24475b14  addiu       $a3, $v0, 0x5B14
    ctx->pc = 0x488facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23316));
    // 0x488fb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x488fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x488fb4: 0x3c03007c  lui         $v1, 0x7C
    ctx->pc = 0x488fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
    // 0x488fb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x488fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x488fbc: 0x24665b08  addiu       $a2, $v1, 0x5B08
    ctx->pc = 0x488fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 23304));
    // 0x488fc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x488fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x488fc4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x488fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x488fc8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x488fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x488fcc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x488fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x488fd0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x488fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x488fd4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x488fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7C5B14u));
    // 0x488fd8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x488fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7C5B08u));
    // 0x488fdc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x488fdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x488fe0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x488fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x488fe4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x488fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x488fe8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x488fe8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7C5B14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7C5B14u, _value); } while (0);
    // 0x488fec: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x488fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x488ff0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x488ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x488ff4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x488ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x488ff8: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x488ff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x488ffc: 0x440003a  bltz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x488FFCu;
    {
        const bool branch_taken_0x488ffc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x489000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488FFCu;
        // 0x489000: 0x3c02007c  lui         $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)124 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488ffc) {
            ctx->pc = 0x4890E8u;
            goto label_4890e8;
        }
    }
    ctx->pc = 0x489004u;
    // 0x489004: 0x3c03007c  lui         $v1, 0x7C
    ctx->pc = 0x489004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
    // 0x489008: 0x3c04007c  lui         $a0, 0x7C
    ctx->pc = 0x489008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)124 << 16));
    // 0x48900c: 0x24555b00  addiu       $s5, $v0, 0x5B00
    ctx->pc = 0x48900cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 23296));
    // 0x489010: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x489010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489014: 0x24745b18  addiu       $s4, $v1, 0x5B18
    ctx->pc = 0x489014u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 23320));
    // 0x489018: 0x24935b0c  addiu       $s3, $a0, 0x5B0C
    ctx->pc = 0x489018u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 23308));
    // 0x48901c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x48901cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489020: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x489020u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x489024: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x489024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_489028:
    // 0x489028: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x489028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x48902c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x48902cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x489030: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x489030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x489034: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x489034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x489038: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x489038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48903c: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x48903cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x489040: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x489040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x489044: 0xc13e654  jal         func_4F9950
    ctx->pc = 0x489044u;
    SET_GPR_U32(ctx, 31, 0x48904Cu);
    ctx->pc = 0x489048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x489044u;
    // 0x489048: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9950u, 0x489044u, 0x48904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48904Cu;
label_48904c:
    // 0x48904c: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x48904cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x489050: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x489050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x489054: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x489054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489058: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x489058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x48905c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x48905cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489060: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x489060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x489064: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x489064u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x489068: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x489068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48906c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x48906cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x489070: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x489070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x489074: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x489074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x489078: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x489078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x48907c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x48907cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x489080: 0xc122356  jal         func_488D58
    ctx->pc = 0x489080u;
    SET_GPR_U32(ctx, 31, 0x489088u);
    ctx->pc = 0x489084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x489080u;
    // 0x489084: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488D58u, 0x489080u, 0x489088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489088u;
label_489088:
    // 0x489088: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x489088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x48908c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x48908cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489090: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x489090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x489094: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x489094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x489098: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x489098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48909c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x48909cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4890a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4890a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4890a4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4890a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4890a8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x4890a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4890ac: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4890acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4890b0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4890b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4890b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4890b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4890b8: 0xc122356  jal         func_488D58
    ctx->pc = 0x4890B8u;
    SET_GPR_U32(ctx, 31, 0x4890C0u);
    ctx->pc = 0x4890BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4890B8u;
    // 0x4890bc: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488D58u, 0x4890B8u, 0x4890C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4890C0u;
label_4890c0:
    // 0x4890c0: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4890c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4890c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4890c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4890c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4890c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4890cc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4890ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4890d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4890d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4890d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4890d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4890d8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4890d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4890dc: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4890dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4890e0: 0x443ffd1  bgezl       $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x4890E0u;
    {
        const bool branch_taken_0x4890e0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4890e0) {
            ctx->pc = 0x4890E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4890E0u;
            // 0x4890e4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x489028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_489028;
        }
    }
    ctx->pc = 0x4890E8u;
label_4890e8:
    // 0x4890e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4890e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4890ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4890ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4890f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4890f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4890f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4890f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4890f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4890f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4890fc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4890fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x489100: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x489100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x489104: 0x3e00008  jr          $ra
    ctx->pc = 0x489104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489104u;
        // 0x489108: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48910Cu;
    // 0x48910c: 0x0  nop
    ctx->pc = 0x48910cu;
    // NOP
    ctx->pc = 0x489110u;
}
