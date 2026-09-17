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

// Function: sub_00347248
// Address: 0x347248 - 0x3472e8
void sub_00347248_0x347248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347248_0x347248");
#endif

    ctx->pc = 0x347248u;

    // 0x347248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34724c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x34724cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x347250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x347254: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x347254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x347258: 0x8d040018  lw          $a0, 0x18($t0)
    ctx->pc = 0x347258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x34725c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x34725cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x347260: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x347260u;
    {
        const bool branch_taken_0x347260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x347264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347260u;
        // 0x347264: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347260) {
            ctx->pc = 0x347280u;
            goto label_347280;
        }
    }
    ctx->pc = 0x347268u;
    // 0x347268: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x347268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x34726c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34726cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x347270: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x347270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x347274: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x347274u;
    {
        const bool branch_taken_0x347274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347274u;
        // 0x347278: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347274) {
            ctx->pc = 0x347294u;
            goto label_347294;
        }
    }
    ctx->pc = 0x34727Cu;
    // 0x34727c: 0x0  nop
    ctx->pc = 0x34727cu;
    // NOP
label_347280:
    // 0x347280: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x347280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x347284: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x347284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x347288: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x347288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x34728c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34728cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x347290: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x347290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_347294:
    // 0x347294: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x347294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x347298: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x347298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34729c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x34729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3472a0: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x3472a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x3472a4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3472a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3472a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3472a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3472ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3472acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3472b0: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x3472b0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3472b4: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x3472b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x3472b8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3472b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3472bc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3472bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3472c0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3472c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3472c4: 0x24840d00  addiu       $a0, $a0, 0xD00
    ctx->pc = 0x3472c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3328));
    // 0x3472c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3472c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3472cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3472ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3472d0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x3472d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x3472d4: 0x248400f0  addiu       $a0, $a0, 0xF0
    ctx->pc = 0x3472d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x3472d8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3472d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3472dc: 0x9107001d  lbu         $a3, 0x1D($t0)
    ctx->pc = 0x3472dcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 29)));
    // 0x3472e0: 0x80d01b8  j           func_3406E0
    ctx->pc = 0x3472E0u;
    ctx->pc = 0x3472E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3472E0u;
    // 0x3472e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3406E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3406E0u, 0x3472E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3472E8u;
}
