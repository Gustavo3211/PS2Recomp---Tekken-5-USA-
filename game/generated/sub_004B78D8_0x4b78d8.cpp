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

// Function: sub_004B78D8
// Address: 0x4b78d8 - 0x4b7d80
void sub_004B78D8_0x4b78d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B78D8_0x4b78d8");
#endif

    switch (ctx->pc) {
        case 0x4b791cu: goto label_4b791c;
        case 0x4b7924u: goto label_4b7924;
        case 0x4b7a54u: goto label_4b7a54;
        case 0x4b7a5cu: goto label_4b7a5c;
        case 0x4b7aecu: goto label_4b7aec;
        case 0x4b7af4u: goto label_4b7af4;
        case 0x4b7afcu: goto label_4b7afc;
        case 0x4b7b04u: goto label_4b7b04;
        case 0x4b7ca4u: goto label_4b7ca4;
        case 0x4b7cf0u: goto label_4b7cf0;
        case 0x4b7d10u: goto label_4b7d10;
        case 0x4b7d68u: goto label_4b7d68;
        default: break;
    }

    ctx->pc = 0x4b78d8u;

    // 0x4b78d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b78d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b78dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b78dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b78e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b78e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b78e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b78e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b78e8: 0x263201b4  addiu       $s2, $s1, 0x1B4
    ctx->pc = 0x4b78e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    // 0x4b78ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b78ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b78f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b78f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b78f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b78f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b78f8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4b78f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4b78fc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4b78fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4b7900: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4b7900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4b7904: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b7904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4b7908: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4b7908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b790c: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4B790Cu;
    {
        const bool branch_taken_0x4b790c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B7910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B790Cu;
        // 0x4b7910: 0x3c13007f  lui         $s3, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b790c) {
            ctx->pc = 0x4B79C0u;
            goto label_4b79c0;
        }
    }
    ctx->pc = 0x4B7914u;
    // 0x4b7914: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4B7914u;
    SET_GPR_U32(ctx, 31, 0x4B791Cu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4B7914u, 0x4B791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B791Cu;
label_4b791c:
    // 0x4b791c: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4B791Cu;
    SET_GPR_U32(ctx, 31, 0x4B7924u);
    ctx->pc = 0x4B7920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B791Cu;
    // 0x4b7920: 0x26700d6c  addiu       $s0, $s3, 0xD6C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4B791Cu, 0x4B7924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7924u;
label_4b7924:
    // 0x4b7924: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b7924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b7928: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4b7928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4b792c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4b792cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4b7930: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x4b7930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4b7934: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b7938: 0x3c090054  lui         $t1, 0x54
    ctx->pc = 0x4b7938u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)84 << 16));
    // 0x4b793c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b793cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b7940: 0x25246e40  addiu       $a0, $t1, 0x6E40
    ctx->pc = 0x4b7940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 28224));
    // 0x4b7944: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b7944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b7948: 0x26270160  addiu       $a3, $s1, 0x160
    ctx->pc = 0x4b7948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x4b794c: 0x262a0162  addiu       $t2, $s1, 0x162
    ctx->pc = 0x4b794cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 354));
    // 0x4b7950: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4b7950u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b7954: 0xa623015e  sh          $v1, 0x15E($s1)
    ctx->pc = 0x4b7954u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b7958: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4b7958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b795c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b795cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b7960: 0x2442ffea  addiu       $v0, $v0, -0x16
    ctx->pc = 0x4b7960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967274));
    // 0x4b7964: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4b7964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4b7968: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b796c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b796cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b7970: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b7970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b7974: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b7974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b7978: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4b7978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4b797c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4b797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b7980: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4b7980u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b7984: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4b7984u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b7988: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b7988u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b798c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4b798cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4b7990: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4b7990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b7994: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x4b7994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4b7998: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x4b7998u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b799c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b799cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b79a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4b79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4b79a4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4b79a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b79a8: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x4b79a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x4b79ac: 0xa6230158  sh          $v1, 0x158($s1)
    ctx->pc = 0x4b79acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b79b0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4b79b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b79b4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4b79b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4b79b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4B79B8u;
    {
        const bool branch_taken_0x4b79b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B79BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B79B8u;
        // 0x4b79bc: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b79b8) {
            ctx->pc = 0x4B79D0u;
            goto label_4b79d0;
        }
    }
    ctx->pc = 0x4B79C0u;
label_4b79c0:
    // 0x4b79c0: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x4b79c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4b79c4: 0x26270160  addiu       $a3, $s1, 0x160
    ctx->pc = 0x4b79c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x4b79c8: 0x3c090054  lui         $t1, 0x54
    ctx->pc = 0x4b79c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)84 << 16));
    // 0x4b79cc: 0x262a0162  addiu       $t2, $s1, 0x162
    ctx->pc = 0x4b79ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 354));
label_4b79d0:
    // 0x4b79d0: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4b79d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b79d4: 0x26720d6c  addiu       $s2, $s3, 0xD6C
    ctx->pc = 0x4b79d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 3436));
    // 0x4b79d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4b79d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b79dc: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4b79dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4b79e0: 0x2442ffea  addiu       $v0, $v0, -0x16
    ctx->pc = 0x4b79e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967274));
    // 0x4b79e4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b79e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b79e8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b79e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b79ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b79ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b79f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b79f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b79f4: 0x24950d74  addiu       $s5, $a0, 0xD74
    ctx->pc = 0x4b79f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 3444));
    // 0x4b79f8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b79f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4b79fc: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b79fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b7a00: 0x24940d78  addiu       $s4, $a0, 0xD78
    ctx->pc = 0x4b7a00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 3448));
    // 0x4b7a04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b7a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7a08: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4b7a08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b7a0c: 0x25296e40  addiu       $t1, $t1, 0x6E40
    ctx->pc = 0x4b7a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 28224));
    // 0x4b7a10: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4b7a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b7a14: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4b7a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7a18: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b7a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b7a1c: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x4b7a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0D78u));
    // 0x4b7a20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b7a24: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x4b7a24u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b7a28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b7a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b7a2c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b7a2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b7a30: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4b7a30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4b7a34: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x4b7a34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x4b7a38: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4b7a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7a3c: 0xe99821  addu        $s3, $a3, $t1
    ctx->pc = 0x4b7a3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x4b7a40: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4b7a40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b7a44: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b7a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b7a48: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4b7a48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4b7a4c: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4B7A4Cu;
    SET_GPR_U32(ctx, 31, 0x4B7A54u);
    ctx->pc = 0x4B7A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7A4Cu;
    // 0x4b7a50: 0xae880000  sw          $t0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4B7A4Cu, 0x4B7A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7A54u;
label_4b7a54:
    // 0x4b7a54: 0xc1230b4  jal         func_48C2D0
    ctx->pc = 0x4B7A54u;
    SET_GPR_U32(ctx, 31, 0x4B7A5Cu);
    ctx->pc = 0x4B7A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7A54u;
    // 0x4b7a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C2D0u, 0x4B7A54u, 0x4B7A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7A5Cu;
label_4b7a5c:
    // 0x4b7a5c: 0x504000b8  beql        $v0, $zero, . + 4 + (0xB8 << 2)
    ctx->pc = 0x4B7A5Cu;
    {
        const bool branch_taken_0x4b7a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b7a5c) {
            ctx->pc = 0x4B7A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B7A5Cu;
            // 0x4b7a60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B7D40u;
            goto label_4b7d40;
        }
    }
    ctx->pc = 0x4B7A64u;
    // 0x4b7a64: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4b7a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b7a68: 0x862201b6  lh          $v0, 0x1B6($s1)
    ctx->pc = 0x4b7a68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 438)));
    // 0x4b7a6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b7a70: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b7a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b7a74: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b7a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b7a78: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4b7a7c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4b7a7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b7a80: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4b7a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4b7a84: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4B7A84u;
    {
        const bool branch_taken_0x4b7a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7A84u;
        // 0x4b7a88: 0x3c0b007f  lui         $t3, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7a84) {
            ctx->pc = 0x4B7AFCu;
            goto label_4b7afc;
        }
    }
    ctx->pc = 0x4B7A8Cu;
    // 0x4b7a8c: 0x8eaa0000  lw          $t2, 0x0($s5)
    ctx->pc = 0x4b7a8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b7a90: 0x256b0d7c  addiu       $t3, $t3, 0xD7C
    ctx->pc = 0x4b7a90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3452));
    // 0x4b7a94: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x4b7a94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b7a98: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x4b7a98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b7a9c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4b7a9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4b7aa0: 0x86630004  lh          $v1, 0x4($s3)
    ctx->pc = 0x4b7aa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4b7aa4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4b7aa4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4b7aa8: 0x86640006  lh          $a0, 0x6($s3)
    ctx->pc = 0x4b7aa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x4b7aac: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b7aacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b7ab0: 0x86620008  lh          $v0, 0x8($s3)
    ctx->pc = 0x4b7ab0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4b7ab4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4b7ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4b7ab8: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4b7ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4b7abc: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x4b7abcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x4b7ac0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b7ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b7ac4: 0x1244824  and         $t1, $t1, $a0
    ctx->pc = 0x4b7ac4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x4b7ac8: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4b7ac8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4b7acc: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4b7accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7ad0: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x4b7ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x4b7ad4: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x4b7ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7ad8: 0xaeaa0000  sw          $t2, 0x0($s5)
    ctx->pc = 0x4b7ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 10));
    // 0x4b7adc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4b7adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7ae0: 0xae890000  sw          $t1, 0x0($s4)
    ctx->pc = 0x4b7ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 9));
    // 0x4b7ae4: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4B7AE4u;
    SET_GPR_U32(ctx, 31, 0x4B7AECu);
    ctx->pc = 0x4B7AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7AE4u;
    // 0x4b7ae8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4B7AE4u, 0x4B7AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7AECu;
label_4b7aec:
    // 0x4b7aec: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4B7AECu;
    SET_GPR_U32(ctx, 31, 0x4B7AF4u);
    ctx->pc = 0x4B7AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7AECu;
    // 0x4b7af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4B7AECu, 0x4B7AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7AF4u;
label_4b7af4:
    // 0x4b7af4: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4B7AF4u;
    SET_GPR_U32(ctx, 31, 0x4B7AFCu);
    ctx->pc = 0x4B7AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7AF4u;
    // 0x4b7af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4B7AF4u, 0x4B7AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7AFCu;
label_4b7afc:
    // 0x4b7afc: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4B7AFCu;
    SET_GPR_U32(ctx, 31, 0x4B7B04u);
    ctx->pc = 0x4B7B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7AFCu;
    // 0x4b7b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4B7AFCu, 0x4B7B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7B04u;
label_4b7b04:
    // 0x4b7b04: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4b7b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b7b08: 0x862201be  lh          $v0, 0x1BE($s1)
    ctx->pc = 0x4b7b08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x4b7b0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b7b10: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b7b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b7b14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b7b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b7b18: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b7b18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4b7b1c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b7b20: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4b7b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b7b24: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4b7b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4b7b28: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b7b2c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b7b2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b7b30: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b7b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b7b34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b7b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b7b38: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b7b38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4b7b3c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4b7b3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b7b40: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x4B7B40u;
    {
        const bool branch_taken_0x4b7b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7B40u;
        // 0x4b7b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7b40) {
            ctx->pc = 0x4B7D14u;
            goto label_4b7d14;
        }
    }
    ctx->pc = 0x4B7B48u;
    // 0x4b7b48: 0x8662000a  lh          $v0, 0xA($s3)
    ctx->pc = 0x4b7b48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x4b7b4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b7b50: 0x2625015e  addiu       $a1, $s1, 0x15E
    ctx->pc = 0x4b7b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4b7b54: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b7b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b7b58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b7b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b7b5c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b7b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4b7b60: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4b7b60u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b7b64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4b7b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4b7b68: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x4b7b68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4b7b6c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4b7b6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b7b70: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4b7b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b7b74: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b7b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b7b78: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b7b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b7b7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b7b80: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b7b80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b7b84: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b7b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b7b88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b7b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b7b8c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b7b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4b7b90: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4b7b90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b7b94: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x4B7B94u;
    {
        const bool branch_taken_0x4b7b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7B94u;
        // 0x4b7b98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7b94) {
            ctx->pc = 0x4B7D14u;
            goto label_4b7d14;
        }
    }
    ctx->pc = 0x4B7B9Cu;
    // 0x4b7b9c: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x4b7b9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x4b7ba0: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x4b7ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
    // 0x4b7ba4: 0x2508d680  addiu       $t0, $t0, -0x2980
    ctx->pc = 0x4b7ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956672));
    // 0x4b7ba8: 0x3469ffff  ori         $t1, $v1, 0xFFFF
    ctx->pc = 0x4b7ba8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b7bac: 0xa5022330  sh          $v0, 0x2330($t0)
    ctx->pc = 0x4b7bacu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B0u, _value); } while (0);
    // 0x4b7bb0: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4b7bb0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4b7bb4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b7bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b7bb8: 0x258c0d7c  addiu       $t4, $t4, 0xD7C
    ctx->pc = 0x4b7bb8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3452));
    // 0x4b7bbc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4b7bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4b7bc0: 0x24730d70  addiu       $s3, $v1, 0xD70
    ctx->pc = 0x4b7bc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 3440));
    // 0x4b7bc4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4b7bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b7bc8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b7bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b7bcc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b7bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b7bd0: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4b7bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b7bd4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b7bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b7bd8: 0x34630c00  ori         $v1, $v1, 0xC00
    ctx->pc = 0x4b7bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3072);
    // 0x4b7bdc: 0xa5022334  sh          $v0, 0x2334($t0)
    ctx->pc = 0x4b7bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b7be0: 0x2516233a  addiu       $s6, $t0, 0x233A
    ctx->pc = 0x4b7be0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 9018));
    // 0x4b7be4: 0x2517233c  addiu       $s7, $t0, 0x233C
    ctx->pc = 0x4b7be4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 8), 9020));
    // 0x4b7be8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b7be8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b7bec: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4b7becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4b7bf0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b7bf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b7bf4: 0x8d8b0000  lw          $t3, 0x0($t4)
    ctx->pc = 0x4b7bf4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b7bf8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b7bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b7bfc: 0x8e6a0000  lw          $t2, 0x0($s3)
    ctx->pc = 0x4b7bfcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b7c00: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b7c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b7c04: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4b7c04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4b7c08: 0xa5022336  sh          $v0, 0x2336($t0)
    ctx->pc = 0x4b7c08u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9014), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b7c0c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4b7c0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4b7c10: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x4b7c10u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x4b7c14: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4b7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4b7c18: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x4b7c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7c1c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b7c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b7c20: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b7c24: 0xa5022338  sh          $v0, 0x2338($t0)
    ctx->pc = 0x4b7c24u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b7c28: 0x96230118  lhu         $v1, 0x118($s1)
    ctx->pc = 0x4b7c28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x4b7c2c: 0xa6c30000  sh          $v1, 0x0($s6)
    ctx->pc = 0x4b7c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b7c30: 0x9627011c  lhu         $a3, 0x11C($s1)
    ctx->pc = 0x4b7c30u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x4b7c34: 0xa6e70000  sh          $a3, 0x0($s7)
    ctx->pc = 0x4b7c34u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x4b7c38: 0x86220120  lh          $v0, 0x120($s1)
    ctx->pc = 0x4b7c38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x4b7c3c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b7c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b7c40: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4b7c40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4b7c44: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x4b7c44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x4b7c48: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4b7c48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4b7c4c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4b7c4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b7c50: 0x24422aaa  addiu       $v0, $v0, 0x2AAA
    ctx->pc = 0x4b7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10922));
    // 0x4b7c54: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b7c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b7c58: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4b7c58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4b7c5c: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x4b7c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x4b7c60: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4b7c60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b7c64: 0xa503233e  sh          $v1, 0x233E($t0)
    ctx->pc = 0x4b7c64u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9022), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b7c68: 0x86220130  lh          $v0, 0x130($s1)
    ctx->pc = 0x4b7c68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x4b7c6c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b7c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b7c70: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b7c70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b7c74: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4b7c74u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4b7c78: 0x86220132  lh          $v0, 0x132($s1)
    ctx->pc = 0x4b7c78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 306)));
    // 0x4b7c7c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b7c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b7c80: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b7c80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b7c84: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4b7c84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4b7c88: 0x86220134  lh          $v0, 0x134($s1)
    ctx->pc = 0x4b7c88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x4b7c8c: 0xae6a0000  sw          $t2, 0x0($s3)
    ctx->pc = 0x4b7c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 10));
    // 0x4b7c90: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b7c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b7c94: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x4b7c94u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x4b7c98: 0xad8b0000  sw          $t3, 0x0($t4)
    ctx->pc = 0x4b7c98u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 11));
    // 0x4b7c9c: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4B7C9Cu;
    SET_GPR_U32(ctx, 31, 0x4B7CA4u);
    ctx->pc = 0x4B7CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7C9Cu;
    // 0x4b7ca0: 0x160382d  daddu       $a3, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4B7C9Cu, 0x4B7CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7CA4u;
label_4b7ca4:
    // 0x4b7ca4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b7ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b7ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b7cac: 0x16020016  bne         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4B7CACu;
    {
        const bool branch_taken_0x4b7cac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B7CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7CACu;
        // 0x4b7cb0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7cac) {
            ctx->pc = 0x4B7D08u;
            goto label_4b7d08;
        }
    }
    ctx->pc = 0x4B7CB4u;
    // 0x4b7cb4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4b7cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b7cb8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b7cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b7cbc: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x4b7cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b7cc0: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x4b7cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x4b7cc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b7cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b7cc8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4b7cc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4b7ccc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b7cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b7cd0: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4b7cd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4b7cd4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4b7cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4b7cd8: 0xae890000  sw          $t1, 0x0($s4)
    ctx->pc = 0x4b7cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 9));
    // 0x4b7cdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b7cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7ce0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4b7ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7ce4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4b7ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7ce8: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4B7CE8u;
    SET_GPR_U32(ctx, 31, 0x4B7CF0u);
    ctx->pc = 0x4B7CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7CE8u;
    // 0x4b7cec: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4B7CE8u, 0x4B7CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7CF0u;
label_4b7cf0:
    // 0x4b7cf0: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B7CF0u;
    {
        const bool branch_taken_0x4b7cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x4b7cf0) {
            ctx->pc = 0x4B7D08u;
            goto label_4b7d08;
        }
    }
    ctx->pc = 0x4B7CF8u;
    // 0x4b7cf8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4b7cf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b7cfc: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4b7cfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b7d00: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x4b7d00u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b7d04: 0xa6e30000  sh          $v1, 0x0($s7)
    ctx->pc = 0x4b7d04u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 3));
label_4b7d08:
    // 0x4b7d08: 0xc127a8c  jal         func_49EA30
    ctx->pc = 0x4B7D08u;
    SET_GPR_U32(ctx, 31, 0x4B7D10u);
    ctx->pc = 0x4B7D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7D08u;
    // 0x4b7d0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EA30u, 0x4B7D08u, 0x4B7D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7D10u;
label_4b7d10:
    // 0x4b7d10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b7d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b7d14:
    // 0x4b7d14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b7d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b7d18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b7d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b7d1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b7d1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b7d20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b7d20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b7d24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b7d24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b7d28: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b7d28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b7d2c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b7d2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b7d30: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b7d30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b7d34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b7d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b7d38: 0x812de10  j           func_4B7840
    ctx->pc = 0x4B7D38u;
    ctx->pc = 0x4B7D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7D38u;
    // 0x4b7d3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7840u, 0x4B7D38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B7D40u;
label_4b7d40:
    // 0x4b7d40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b7d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b7d44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b7d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b7d48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b7d48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b7d4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b7d4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b7d50: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b7d50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b7d54: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b7d54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b7d58: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b7d58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b7d5c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b7d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b7d60: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7D60u;
        // 0x4b7d64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7D68u;
label_4b7d68:
    // 0x4b7d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b7d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b7d6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b7d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b7d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b7d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b7d74: 0x812de10  j           func_4B7840
    ctx->pc = 0x4B7D74u;
    ctx->pc = 0x4B7D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7D74u;
    // 0x4b7d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7840u, 0x4B7D74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B7D7Cu;
    // 0x4b7d7c: 0x0  nop
    ctx->pc = 0x4b7d7cu;
    // NOP
    ctx->pc = 0x4b7d80u;
}
