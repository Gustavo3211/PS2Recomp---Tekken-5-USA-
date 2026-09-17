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

// Function: sub_004CAFF0
// Address: 0x4caff0 - 0x4cb490
void sub_004CAFF0_0x4caff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CAFF0_0x4caff0");
#endif

    switch (ctx->pc) {
        case 0x4cb010u: goto label_4cb010;
        case 0x4cb02cu: goto label_4cb02c;
        case 0x4cb0b8u: goto label_4cb0b8;
        case 0x4cb448u: goto label_4cb448;
        case 0x4cb458u: goto label_4cb458;
        case 0x4cb468u: goto label_4cb468;
        case 0x4cb478u: goto label_4cb478;
        default: break;
    }

    ctx->pc = 0x4caff0u;

    // 0x4caff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4caff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4caff4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4caff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4caff8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4caff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4caffc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4caffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cb000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cb000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cb004: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4cb004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4cb008: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4CB008u;
    SET_GPR_U32(ctx, 31, 0x4CB010u);
    ctx->pc = 0x4CB00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB008u;
    // 0x4cb00c: 0x263201b4  addiu       $s2, $s1, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4CB008u, 0x4CB010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB010u;
label_4cb010:
    // 0x4cb010: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4cb010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4cb014: 0xac620f80  sw          $v0, 0xF80($v1)
    ctx->pc = 0x4cb014u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0F80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F80u, _value); } while (0);
    // 0x4cb018: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4cb018u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cb01c: 0x4400095  bltz        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x4CB01Cu;
    {
        const bool branch_taken_0x4cb01c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4CB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB01Cu;
        // 0x4cb020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb01c) {
            ctx->pc = 0x4CB274u;
            goto label_4cb274;
        }
    }
    ctx->pc = 0x4CB024u;
    // 0x4cb024: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4CB024u;
    SET_GPR_U32(ctx, 31, 0x4CB02Cu);
    ctx->pc = 0x4CB028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB024u;
    // 0x4cb028: 0x3c10ffff  lui         $s0, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4CB024u, 0x4CB02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB02Cu;
label_4cb02c:
    // 0x4cb02c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4cb02cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4cb030: 0x24a50f6c  addiu       $a1, $a1, 0xF6C
    ctx->pc = 0x4cb030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3948));
    // 0x4cb034: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x4cb034u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x4cb038: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4cb038u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0F6Cu));
    // 0x4cb03c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4cb03cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4cb040: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4cb040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4cb044: 0x24e70f70  addiu       $a3, $a3, 0xF70
    ctx->pc = 0x4cb044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3952));
    // 0x4cb048: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cb048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cb04c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4cb04cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0F70u));
    // 0x4cb050: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cb050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cb054: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4cb054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4cb058: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4cb058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4cb05c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cb05cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cb060: 0x24c60f74  addiu       $a2, $a2, 0xF74
    ctx->pc = 0x4cb060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3956));
    // 0x4cb064: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4cb064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4cb068: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4cb068u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F74u));
    // 0x4cb06c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4cb06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4cb070: 0x94a80000  lhu         $t0, 0x0($a1)
    ctx->pc = 0x4cb070u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cb074: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cb074u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cb078: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb07c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4cb07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4cb080: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4cb080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4cb084: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4cb084u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4cb088: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4cb088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4cb08c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4cb08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4cb090: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cb090u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cb094: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4cb094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4cb098: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cb098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb09c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4cb09cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4cb0a0: 0xa6280130  sh          $t0, 0x130($s1)
    ctx->pc = 0x4cb0a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 304), (uint16_t)GPR_U32(ctx, 8));
    // 0x4cb0a4: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4cb0a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cb0a8: 0xa6220132  sh          $v0, 0x132($s1)
    ctx->pc = 0x4cb0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cb0ac: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4cb0acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cb0b0: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4CB0B0u;
    SET_GPR_U32(ctx, 31, 0x4CB0B8u);
    ctx->pc = 0x4CB0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB0B0u;
    // 0x4cb0b4: 0xa6230134  sh          $v1, 0x134($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 308), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4CB0B0u, 0x4CB0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB0B8u;
label_4cb0b8:
    // 0x4cb0b8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4cb0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4cb0bc: 0xa622015e  sh          $v0, 0x15E($s1)
    ctx->pc = 0x4cb0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cb0c0: 0x24a50f60  addiu       $a1, $a1, 0xF60
    ctx->pc = 0x4cb0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
    // 0x4cb0c4: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x4cb0c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4cb0c8: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4cb0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4cb0cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4cb0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F60u));
    // 0x4cb0d0: 0x24c60f84  addiu       $a2, $a2, 0xF84
    ctx->pc = 0x4cb0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3972));
    // 0x4cb0d4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4cb0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4cb0d8: 0x262a0118  addiu       $t2, $s1, 0x118
    ctx->pc = 0x4cb0d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
    // 0x4cb0dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb0e0: 0x262b011c  addiu       $t3, $s1, 0x11C
    ctx->pc = 0x4cb0e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
    // 0x4cb0e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cb0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb0e8: 0x262d0120  addiu       $t5, $s1, 0x120
    ctx->pc = 0x4cb0e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x4cb0ec: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4cb0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4cb0f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb0f4: 0x26290124  addiu       $t1, $s1, 0x124
    ctx->pc = 0x4cb0f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    // 0x4cb0f8: 0x262c0128  addiu       $t4, $s1, 0x128
    ctx->pc = 0x4cb0f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
    // 0x4cb0fc: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4cb0fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cb100: 0x262e012c  addiu       $t6, $s1, 0x12C
    ctx->pc = 0x4cb100u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x4cb104: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x4cb104u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4cb108: 0x2442ffb7  addiu       $v0, $v0, -0x49
    ctx->pc = 0x4cb108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967223));
    // 0x4cb10c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4cb10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4cb110: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cb110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb114: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4cb114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4cb118: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb11c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4cb11cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cb120: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4cb120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4cb124: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4cb124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4cb128: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cb128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb12c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4cb12cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4cb130: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4cb130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cb134: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cb134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cb138: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4cb138u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4cb13c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4cb13cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4cb140: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4cb140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4cb144: 0x24217280  addiu       $at, $at, 0x7280
    ctx->pc = 0x4cb144u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29312));
    // 0x4cb148: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4cb148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4cb14c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4cb14cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cb150: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x4cb150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cb154: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4cb154u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4cb158: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x4cb158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4cb15c: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x4cb15cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cb160: 0x24480006  addiu       $t0, $v0, 0x6
    ctx->pc = 0x4cb160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4cb164: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4cb164u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4cb168: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x4cb168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4cb16c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4cb16cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cb170: 0xa6230160  sh          $v1, 0x160($s1)
    ctx->pc = 0x4cb170u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cb174: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x4cb174u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x4cb178: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4cb178u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cb17c: 0xa6230162  sh          $v1, 0x162($s1)
    ctx->pc = 0x4cb17cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cb180: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x4cb180u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x4cb184: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4cb184u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cb188: 0xa6230164  sh          $v1, 0x164($s1)
    ctx->pc = 0x4cb188u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 356), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cb18c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4cb18cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4cb190: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4cb190u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cb194: 0x862401be  lh          $a0, 0x1BE($s1)
    ctx->pc = 0x4cb194u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x4cb198: 0xa6230138  sh          $v1, 0x138($s1)
    ctx->pc = 0x4cb198u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 312), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cb19c: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4cb19cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4cb1a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4cb1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cb1a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb1a8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4cb1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4cb1ac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4cb1acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4cb1b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb1b4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4cb1b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cb1b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4cb1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4cb1bc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4cb1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4cb1c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cb1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb1c4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4cb1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4cb1c8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4cb1c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cb1cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cb1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cb1d0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4cb1d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4cb1d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4cb1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4cb1d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4cb1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4cb1dc: 0x24217230  addiu       $at, $at, 0x7230
    ctx->pc = 0x4cb1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29232));
    // 0x4cb1e0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4cb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4cb1e4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4cb1e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cb1e8: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x4cb1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cb1ec: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4cb1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4cb1f0: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x4cb1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cb1f4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4cb1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4cb1f8: 0xa5600000  sh          $zero, 0x0($t3)
    ctx->pc = 0x4cb1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cb1fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4cb1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cb200: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4cb200u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cb204: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cb204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cb208: 0xa5a30000  sh          $v1, 0x0($t5)
    ctx->pc = 0x4cb208u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cb20c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4cb20cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4cb210: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x4cb210u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4cb214: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4cb214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cb218: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4cb218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cb21c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb220: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4cb220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4cb224: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cb224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cb228: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4cb228u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4cb22c: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4cb22cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cb230: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4cb230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4cb234: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4cb234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cb238: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb23c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4cb23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4cb240: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cb240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cb244: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4cb244u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4cb248: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x4cb248u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4cb24c: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4cb24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4cb250: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4cb250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cb254: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4cb254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4cb258: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb25c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cb25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cb260: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4cb260u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4cb264: 0xa62f002e  sh          $t7, 0x2E($s1)
    ctx->pc = 0x4cb264u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 15));
    // 0x4cb268: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4cb268u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cb26c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4cb26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4cb270: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4cb270u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_4cb274:
    // 0x4cb274: 0x8e380140  lw          $t8, 0x140($s1)
    ctx->pc = 0x4cb274u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x4cb278: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cb278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cb27c: 0xac580f78  sw          $t8, 0xF78($v0)
    ctx->pc = 0x4cb27cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 24)); ps2TraceGuestWrite(rdram, 0x7F0F78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F78u, _value); } while (0);
    // 0x4cb280: 0x870301b4  lh          $v1, 0x1B4($t8)
    ctx->pc = 0x4cb280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 436)));
    // 0x4cb284: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CB284u;
    {
        const bool branch_taken_0x4cb284 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4CB288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB284u;
        // 0x4cb288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb284) {
            ctx->pc = 0x4CB2A8u;
            goto label_4cb2a8;
        }
    }
    ctx->pc = 0x4CB28Cu;
    // 0x4cb28c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cb28cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cb290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cb290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cb294: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cb294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cb298: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4cb298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cb29c: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4CB29Cu;
    ctx->pc = 0x4CB2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB29Cu;
    // 0x4cb2a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4CB2A4u;
    // 0x4cb2a4: 0x0  nop
    ctx->pc = 0x4cb2a4u;
    // NOP
label_4cb2a8:
    // 0x4cb2a8: 0x87020160  lh          $v0, 0x160($t8)
    ctx->pc = 0x4cb2a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 352)));
    // 0x4cb2ac: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CB2ACu;
    {
        const bool branch_taken_0x4cb2ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4CB2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB2ACu;
        // 0x4cb2b0: 0x3c08007f  lui         $t0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb2ac) {
            ctx->pc = 0x4CB2D0u;
            goto label_4cb2d0;
        }
    }
    ctx->pc = 0x4CB2B4u;
    // 0x4cb2b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cb2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb2b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cb2b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cb2bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cb2bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cb2c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cb2c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cb2c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4cb2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cb2c8: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4CB2C8u;
    ctx->pc = 0x4CB2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB2C8u;
    // 0x4cb2cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4CB2D0u;
label_4cb2d0:
    // 0x4cb2d0: 0x86220130  lh          $v0, 0x130($s1)
    ctx->pc = 0x4cb2d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x4cb2d4: 0x25080f6c  addiu       $t0, $t0, 0xF6C
    ctx->pc = 0x4cb2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3948));
    // 0x4cb2d8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4cb2d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4cb2dc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4cb2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cb2e0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cb2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cb2e4: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4cb2e4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4cb2e8: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4cb2e8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4cb2ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb2f0: 0x256b0f70  addiu       $t3, $t3, 0xF70
    ctx->pc = 0x4cb2f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3952));
    // 0x4cb2f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cb2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb2f8: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x4cb2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cb2fc: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4cb2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4cb300: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb304: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cb304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cb308: 0x258c0f74  addiu       $t4, $t4, 0xF74
    ctx->pc = 0x4cb308u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3956));
    // 0x4cb30c: 0x86220132  lh          $v0, 0x132($s1)
    ctx->pc = 0x4cb30cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 306)));
    // 0x4cb310: 0x262d0010  addiu       $t5, $s1, 0x10
    ctx->pc = 0x4cb310u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4cb314: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4cb314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4cb318: 0x262e0014  addiu       $t6, $s1, 0x14
    ctx->pc = 0x4cb318u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x4cb31c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cb31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cb320: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4cb320u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cb324: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4cb324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4cb328: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cb328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cb32c: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4cb32cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4cb330: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cb330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cb334: 0x262f0018  addiu       $t7, $s1, 0x18
    ctx->pc = 0x4cb334u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x4cb338: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x4cb338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4cb33c: 0x86220134  lh          $v0, 0x134($s1)
    ctx->pc = 0x4cb33cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x4cb340: 0x85670000  lh          $a3, 0x0($t3)
    ctx->pc = 0x4cb340u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cb344: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cb344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cb348: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4cb348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4cb34c: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4cb34cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4cb350: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cb350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cb354: 0x8f020010  lw          $v0, 0x10($t8)
    ctx->pc = 0x4cb354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x4cb358: 0x858a0000  lh          $t2, 0x0($t4)
    ctx->pc = 0x4cb358u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4cb35c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4cb35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4cb360: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cb360u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cb364: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4cb364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4cb368: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4cb368u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4cb36c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4cb36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4cb370: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4cb370u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4cb374: 0x8f020014  lw          $v0, 0x14($t8)
    ctx->pc = 0x4cb374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x4cb378: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4cb378u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cb37c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4cb37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4cb380: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cb380u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cb384: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4cb384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cb388: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4cb388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4cb38c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb390: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x4cb390u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x4cb394: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4cb394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4cb398: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4cb398u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4cb39c: 0x8f020018  lw          $v0, 0x18($t8)
    ctx->pc = 0x4cb39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x4cb3a0: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4cb3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4cb3a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cb3a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cb3a8: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x4cb3a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4cb3ac: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x4cb3acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x4cb3b0: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4cb3b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x4cb3b4: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4cb3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4cb3b8: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4cb3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4cb3bc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cb3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cb3c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cb3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cb3c4: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4cb3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x4cb3c8: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4cb3c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cb3cc: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4cb3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4cb3d0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4cb3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cb3d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb3d8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cb3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cb3dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cb3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cb3e0: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4cb3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4cb3e4: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4cb3e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4cb3e8: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4cb3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4cb3ec: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4cb3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cb3f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb3f4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cb3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cb3f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cb3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cb3fc: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x4cb3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x4cb400: 0x862301bc  lh          $v1, 0x1BC($s1)
    ctx->pc = 0x4cb400u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x4cb404: 0x10700012  beq         $v1, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4CB404u;
    {
        const bool branch_taken_0x4cb404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x4CB408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB404u;
        // 0x4cb408: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb404) {
            ctx->pc = 0x4CB450u;
            goto label_4cb450;
        }
    }
    ctx->pc = 0x4CB40Cu;
    // 0x4cb40c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CB40Cu;
    {
        const bool branch_taken_0x4cb40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cb40c) {
            ctx->pc = 0x4CB410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CB40Cu;
            // 0x4cb410: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CB428u;
            goto label_4cb428;
        }
    }
    ctx->pc = 0x4CB414u;
    // 0x4cb414: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4CB414u;
    {
        const bool branch_taken_0x4cb414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB414u;
        // 0x4cb418: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb414) {
            ctx->pc = 0x4CB440u;
            goto label_4cb440;
        }
    }
    ctx->pc = 0x4CB41Cu;
    // 0x4cb41c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4CB41Cu;
    {
        const bool branch_taken_0x4cb41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB41Cu;
        // 0x4cb420: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb41c) {
            ctx->pc = 0x4CB480u;
            goto label_4cb480;
        }
    }
    ctx->pc = 0x4CB424u;
    // 0x4cb424: 0x0  nop
    ctx->pc = 0x4cb424u;
    // NOP
label_4cb428:
    // 0x4cb428: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4CB428u;
    {
        const bool branch_taken_0x4cb428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CB42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB428u;
        // 0x4cb42c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb428) {
            ctx->pc = 0x4CB460u;
            goto label_4cb460;
        }
    }
    ctx->pc = 0x4CB430u;
    // 0x4cb430: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4CB430u;
    {
        const bool branch_taken_0x4cb430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB430u;
        // 0x4cb434: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb430) {
            ctx->pc = 0x4CB470u;
            goto label_4cb470;
        }
    }
    ctx->pc = 0x4CB438u;
    // 0x4cb438: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4CB438u;
    {
        const bool branch_taken_0x4cb438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB438u;
        // 0x4cb43c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb438) {
            ctx->pc = 0x4CB480u;
            goto label_4cb480;
        }
    }
    ctx->pc = 0x4CB440u;
label_4cb440:
    // 0x4cb440: 0xc132d24  jal         func_4CB490
    ctx->pc = 0x4CB440u;
    SET_GPR_U32(ctx, 31, 0x4CB448u);
    ctx->pc = 0x4CB444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB440u;
    // 0x4cb444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CB490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CB490u, 0x4CB440u, 0x4CB448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB448u;
label_4cb448:
    // 0x4cb448: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4CB448u;
    {
        const bool branch_taken_0x4cb448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB448u;
        // 0x4cb44c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb448) {
            ctx->pc = 0x4CB47Cu;
            goto label_4cb47c;
        }
    }
    ctx->pc = 0x4CB450u;
label_4cb450:
    // 0x4cb450: 0xc132d56  jal         func_4CB558
    ctx->pc = 0x4CB450u;
    SET_GPR_U32(ctx, 31, 0x4CB458u);
    ctx->pc = 0x4CB454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB450u;
    // 0x4cb454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CB558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CB558u, 0x4CB450u, 0x4CB458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB458u;
label_4cb458:
    // 0x4cb458: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4CB458u;
    {
        const bool branch_taken_0x4cb458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB458u;
        // 0x4cb45c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb458) {
            ctx->pc = 0x4CB47Cu;
            goto label_4cb47c;
        }
    }
    ctx->pc = 0x4CB460u;
label_4cb460:
    // 0x4cb460: 0xc132fbe  jal         func_4CBEF8
    ctx->pc = 0x4CB460u;
    SET_GPR_U32(ctx, 31, 0x4CB468u);
    ctx->pc = 0x4CB464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB460u;
    // 0x4cb464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CBEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CBEF8u, 0x4CB460u, 0x4CB468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB468u;
label_4cb468:
    // 0x4cb468: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4CB468u;
    {
        const bool branch_taken_0x4cb468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB468u;
        // 0x4cb46c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb468) {
            ctx->pc = 0x4CB47Cu;
            goto label_4cb47c;
        }
    }
    ctx->pc = 0x4CB470u;
label_4cb470:
    // 0x4cb470: 0xc132ff0  jal         func_4CBFC0
    ctx->pc = 0x4CB470u;
    SET_GPR_U32(ctx, 31, 0x4CB478u);
    ctx->pc = 0x4CB474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB470u;
    // 0x4cb474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CBFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CBFC0u, 0x4CB470u, 0x4CB478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB478u;
label_4cb478:
    // 0x4cb478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cb478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4cb47c:
    // 0x4cb47c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cb47cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4cb480:
    // 0x4cb480: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cb480u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cb484: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4cb484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cb488: 0x3e00008  jr          $ra
    ctx->pc = 0x4CB488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB488u;
        // 0x4cb48c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CB488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CB490u;
}
