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

// Function: sub_004DB0D0
// Address: 0x4db0d0 - 0x4db238
void sub_004DB0D0_0x4db0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB0D0_0x4db0d0");
#endif

    switch (ctx->pc) {
        case 0x4db0ecu: goto label_4db0ec;
        case 0x4db108u: goto label_4db108;
        default: break;
    }

    ctx->pc = 0x4db0d0u;

    // 0x4db0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4db0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4db0d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4db0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4db0d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4db0d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db0dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4db0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4db0e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4db0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4db0e4: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4DB0E4u;
    SET_GPR_U32(ctx, 31, 0x4DB0ECu);
    ctx->pc = 0x4DB0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB0E4u;
    // 0x4db0e8: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4DB0E4u, 0x4DB0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB0ECu;
label_4db0ec:
    // 0x4db0ec: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4db0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4db0f0: 0xac62111c  sw          $v0, 0x111C($v1)
    ctx->pc = 0x4db0f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F111Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F111Cu, _value); } while (0);
    // 0x4db0f4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4db0f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4db0f8: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4DB0F8u;
    {
        const bool branch_taken_0x4db0f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4DB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB0F8u;
        // 0x4db0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db0f8) {
            ctx->pc = 0x4DB184u;
            goto label_4db184;
        }
    }
    ctx->pc = 0x4DB100u;
    // 0x4db100: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4DB100u;
    SET_GPR_U32(ctx, 31, 0x4DB108u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4DB100u, 0x4DB108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB108u;
label_4db108:
    // 0x4db108: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4db108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4db10c: 0x248410fc  addiu       $a0, $a0, 0x10FC
    ctx->pc = 0x4db10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4348));
    // 0x4db110: 0x860201be  lh          $v0, 0x1BE($s0)
    ctx->pc = 0x4db110u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4db114: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4db114u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F10FCu));
    // 0x4db118: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4db118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4db11c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4db11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4db120: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x4db120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4db124: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4db124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4db128: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4db128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4db12c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4db12cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4db130: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4db130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4db134: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4db134u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4db138: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4db138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4db13c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4db13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4db140: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4db140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4db144: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4db144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4db148: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4db148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4db14c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4db14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4db150: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4db150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4db154: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4db154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4db158: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4db158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4db15c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4db15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4db160: 0x94637c00  lhu         $v1, 0x7C00($v1)
    ctx->pc = 0x4db160u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 31744)));
    // 0x4db164: 0xa6060118  sh          $a2, 0x118($s0)
    ctx->pc = 0x4db164u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 6));
    // 0x4db168: 0xa6030138  sh          $v1, 0x138($s0)
    ctx->pc = 0x4db168u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 312), (uint16_t)GPR_U32(ctx, 3));
    // 0x4db16c: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x4db16cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4db170: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4db170u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4db174: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4db174u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4db178: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4db178u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4db17c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4db17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4db180: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4db180u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4db184:
    // 0x4db184: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x4db184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x4db188: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4db188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4db18c: 0xac441118  sw          $a0, 0x1118($v0)
    ctx->pc = 0x4db18cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F1118u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1118u, _value); } while (0);
    // 0x4db190: 0x848301b4  lh          $v1, 0x1B4($a0)
    ctx->pc = 0x4db190u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x4db194: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DB194u;
    {
        const bool branch_taken_0x4db194 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4DB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB194u;
        // 0x4db198: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db194) {
            ctx->pc = 0x4DB1B0u;
            goto label_4db1b0;
        }
    }
    ctx->pc = 0x4DB19Cu;
    // 0x4db19c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4db19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db1a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4db1a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db1a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4db1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db1a8: 0x8136dc6  j           func_4DB718
    ctx->pc = 0x4DB1A8u;
    ctx->pc = 0x4DB1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB1A8u;
    // 0x4db1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB718u, 0x4DB1A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DB1B0u;
label_4db1b0:
    // 0x4db1b0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4db1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4db1b4: 0x8483016a  lh          $v1, 0x16A($a0)
    ctx->pc = 0x4db1b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 362)));
    // 0x4db1b8: 0x244610fc  addiu       $a2, $v0, 0x10FC
    ctx->pc = 0x4db1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4348));
    // 0x4db1bc: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4db1bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4db1c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4db1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F10FCu));
    // 0x4db1c4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4db1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4db1c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4db1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4db1cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4db1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4db1d0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4db1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4db1d4: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x4db1d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4db1d8: 0x8603016a  lh          $v1, 0x16A($s0)
    ctx->pc = 0x4db1d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 362)));
    // 0x4db1dc: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4db1dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4db1e0: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4DB1E0u;
    {
        const bool branch_taken_0x4db1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4db1e0) {
            ctx->pc = 0x4DB1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DB1E0u;
            // 0x4db1e4: 0x86020138  lh          $v0, 0x138($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DB200u;
            goto label_4db200;
        }
    }
    ctx->pc = 0x4DB1E8u;
    // 0x4db1e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4db1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db1ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4db1ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db1f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4db1f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4db1f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4db1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db1f8: 0x8136dc6  j           func_4DB718
    ctx->pc = 0x4DB1F8u;
    ctx->pc = 0x4DB1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB1F8u;
    // 0x4db1fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB718u, 0x4DB1F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DB200u;
label_4db200:
    // 0x4db200: 0x2605011c  addiu       $a1, $s0, 0x11C
    ctx->pc = 0x4db200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
    // 0x4db204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4db204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4db208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db20c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4db20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4db210: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4db210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4db214: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x4db214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4db218: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4db218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db21c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4db21cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4db220: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4db220u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4db224: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4db224u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4db228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4db228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4db22c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4db22cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4db230: 0x8127e84  j           func_49FA10
    ctx->pc = 0x4DB230u;
    ctx->pc = 0x4DB234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB230u;
    // 0x4db234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    sub_0049FA10_0x49fa10(rdram, ctx, runtime); return;
    ctx->pc = 0x4DB238u;
}
